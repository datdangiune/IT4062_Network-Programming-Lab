#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include "user.h"
#include "question.h"

#pragma comment(lib, "Ws2_32.lib")

#define PORT 8080
#define BUFFER_SIZE 1024

typedef struct {
    int id;
    int num_questions;
    int time_limit;
    int status;  // 0: not started, 1: in progress, 2: finished
} ExamRoom;

ExamRoom exam_rooms[10];  // Array of exam rooms
int room_count = 0;

void handle_client(SOCKET client_socket);
void start_training_mode(SOCKET client_socket);
void create_exam_room(SOCKET client_socket);
void view_exam_rooms(SOCKET client_socket);
void participate_in_exam(SOCKET client_socket, int room_id);

int main() {
    WSADATA wsaData;
    SOCKET server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    int addr_len = sizeof(client_addr);

    // Load câu hỏi từ file question.txt
    load_questions("question.txt");

    // Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        printf("Winsock initialization failed\n");
        return 1;
    }

    // Create socket
    if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("Socket creation failed\n");
        WSACleanup();
        return 1;
    }

    // Set up server address
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    // Bind socket to address
    if (bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == SOCKET_ERROR) {
        printf("Socket bind failed\n");
        closesocket(server_socket);
        WSACleanup();
        return 1;
    }

    // Listen for connections
    if (listen(server_socket, 3) == SOCKET_ERROR) {
        printf("Socket listen failed\n");
        closesocket(server_socket);
        WSACleanup();
        return 1;
    }

    printf("Server is running...\n");

    // Accept client connections
    while ((client_socket = accept(server_socket, (struct sockaddr*)&client_addr, &addr_len)) != INVALID_SOCKET) {
        printf("Client connected\n");
        handle_client(client_socket);
        closesocket(client_socket);
    }

    closesocket(server_socket);
    WSACleanup();
    return 0;
}

void handle_client(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};
    char username[BUFFER_SIZE], password[BUFFER_SIZE];

    // Send prompt for login or register
    char *message = "Hello, please enter 'register' or 'login' to proceed:\n";
    send(client_socket, message, strlen(message), 0);

    // Receive command from client
    memset(buffer, 0, sizeof(buffer));  // Clear buffer before receiving
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    buffer[strcspn(buffer, "\n")] = 0;  // Remove newline character

    if (strncmp(buffer, "register", 8) == 0) {
        // Register new user
        send(client_socket, "Enter username: ", 16, 0);
        recv(client_socket, username, BUFFER_SIZE, 0);
        username[strcspn(username, "\n")] = 0;

        send(client_socket, "Enter password: ", 16, 0);
        recv(client_socket, password, BUFFER_SIZE, 0);
        password[strcspn(password, "\n")] = 0;

        if (register_user(username, password)) {
            send(client_socket, "Registration successful!\n", 25, 0);
        } else {
            send(client_socket, "Username already exists.\n", 26, 0);
        }
    } else if (strncmp(buffer, "login", 5) == 0) {
        // User login
        send(client_socket, "Enter username: ", 16, 0);
        recv(client_socket, username, BUFFER_SIZE, 0);
        username[strcspn(username, "\n")] = 0;

        send(client_socket, "Enter password: ", 16, 0);
        recv(client_socket, password, BUFFER_SIZE, 0);
        password[strcspn(password, "\n")] = 0;

        if (authenticate_user(username, password)) {
            send(client_socket, "Login successful!\n", 19, 0);

            // Send options for user to choose
            message = "Choose an option:\n1. Training mode\n2. Create exam room\n3. View exam rooms\n4. Exit\n";
            send(client_socket, message, strlen(message), 0);

            // Receive user choice
            memset(buffer, 0, sizeof(buffer));
            recv(client_socket, buffer, BUFFER_SIZE, 0);
            buffer[strcspn(buffer, "\n")] = 0;

            if (strcmp(buffer, "1") == 0) {
                start_training_mode(client_socket);  // Start training mode
            } else if (strcmp(buffer, "2") == 0) {
                create_exam_room(client_socket);  // Create an exam room
            } else if (strcmp(buffer, "3") == 0) {
                view_exam_rooms(client_socket);  // View list of exam rooms
            } else if (strcmp(buffer, "4") == 0) {
                send(client_socket, "Exiting...\n", 12, 0);
            } else {
                send(client_socket, "Invalid option. Exiting...\n", 27, 0);
            }
        } else {
            send(client_socket, "Login failed.\n", 15, 0);
        }
    } else {
        send(client_socket, "Invalid command.\n", 18, 0);
    }
}

// Chế độ luyện tập
void start_training_mode(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};
    int correct_answers = 0;

    // Set up training mode
    int num_questions = 5;
    int i;
    for (i = 0; i < num_questions; i++) {
        send_question(client_socket, i);  // Send question
        memset(buffer, 0, sizeof(buffer));
        recv(client_socket, buffer, BUFFER_SIZE, 0);  // Receive user's answer
        buffer[strcspn(buffer, "\n")] = 0;  // Remove newline

        if (check_answer(buffer, i)) {  // Check if the answer is correct
            correct_answers++;
        }
    }

    // Send result
    sprintf(buffer, "Training completed. You answered %d/%d questions correctly.\n", correct_answers, num_questions);
    send(client_socket, buffer, strlen(buffer), 0);
}

// Tạo phòng thi
void create_exam_room(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};

    // Get number of questions for the exam room
    send(client_socket, "Enter number of questions: ", 27, 0);
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    int num_questions = atoi(buffer);

    // Get time limit for the exam room
    send(client_socket, "Enter time limit (minutes): ", 28, 0);
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    int time_limit = atoi(buffer);

    // Create a new exam room
    exam_rooms[room_count].id = room_count + 1;
    exam_rooms[room_count].num_questions = num_questions;
    exam_rooms[room_count].time_limit = time_limit;
    exam_rooms[room_count].status = 0;  // Not started yet
    room_count++;

    sprintf(buffer, "Exam room created successfully with ID %d.\n", room_count);
    send(client_socket, buffer, strlen(buffer), 0);
}

// Xem danh sách các phòng thi
void view_exam_rooms(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};

    if (room_count == 0) {
        send(client_socket, "No exam rooms available.\n", 25, 0);
        return;
    }

    // Send list of exam rooms
    for (int i = 0; i < room_count; i++) {
        sprintf(buffer, "Room ID: %d, Questions: %d, Time Limit: %d minutes, Status: %s\n",
                exam_rooms[i].id, exam_rooms[i].num_questions, exam_rooms[i].time_limit,
                exam_rooms[i].status == 0 ? "Not started" : (exam_rooms[i].status == 1 ? "In progress" : "Finished"));
        send(client_socket, buffer, strlen(buffer), 0);
    }
}

// Tham gia phòng thi
void participate_in_exam(SOCKET client_socket, int room_id) {
    char buffer[BUFFER_SIZE] = {0};
    int correct_answers = 0;

    for (int i = 0; i < exam_rooms[room_id - 1].num_questions; i++) {
        send_question(client_socket, i);  // Send question
                memset(buffer, 0, sizeof(buffer));
        recv(client_socket, buffer, BUFFER_SIZE, 0);  // Receive user's answer
        buffer[strcspn(buffer, "\n")] = 0;  // Remove newline character

        if (check_answer(buffer, i)) {  // Check if the answer is correct
            correct_answers++;
        }
    }

    // Mark the exam as finished
    exam_rooms[room_id - 1].status = 2;

    // Send exam result
    sprintf(buffer, "Exam completed. You answered %d/%d questions correctly.\n", correct_answers, exam_rooms[room_id - 1].num_questions);
    send(client_socket, buffer, strlen(buffer), 0);
}

