#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>

#pragma comment(lib, "Ws2_32.lib")

#define PORT 8080
#define BUFFER_SIZE 1024

void training_mode(SOCKET client_socket);
void create_exam_room(SOCKET client_socket);
void view_exam_rooms(SOCKET client_socket);
void participate_in_exam(SOCKET client_socket);

int main() {
    WSADATA wsaData;
    SOCKET client_socket;
    struct sockaddr_in server_addr;
    char buffer[BUFFER_SIZE] = {0};
    char username[BUFFER_SIZE], password[BUFFER_SIZE];

    // Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        printf("Winsock initialization failed\n");
        return 1;
    }

    // Create socket
    if ((client_socket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("Socket creation failed with error: %d\n", WSAGetLastError());
        WSACleanup();
        return 1;
    }

    // Set up server address
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // Connect to server
    if (connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == SOCKET_ERROR) {
        printf("Connection to server failed with error: %d\n", WSAGetLastError());
        closesocket(client_socket);
        WSACleanup();
        return 1;
    }

    // Receive initial prompt from server
    memset(buffer, 0, sizeof(buffer));
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("%s", buffer);  // Display initial message

    // Send login or register command
    fgets(buffer, BUFFER_SIZE, stdin);
    buffer[strcspn(buffer, "\n")] = 0;  // Remove newline character
    send(client_socket, buffer, strlen(buffer), 0);

    // Receive username prompt
    memset(buffer, 0, sizeof(buffer));
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("%s", buffer);

    // Send username
    fgets(username, BUFFER_SIZE, stdin);
    username[strcspn(username, "\n")] = 0;  // Remove newline character
    send(client_socket, username, strlen(username), 0);

    // Receive password prompt
    memset(buffer, 0, sizeof(buffer));
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("%s", buffer);

    // Send password
    fgets(password, BUFFER_SIZE, stdin);
    password[strcspn(password, "\n")] = 0;  // Remove newline character
    send(client_socket, password, strlen(password), 0);

    // Receive login result
    memset(buffer, 0, sizeof(buffer));
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("%s", buffer);

    // Handle post-login actions if login is successful
    if (strstr(buffer, "Login successful") != NULL) {
        // Receive option prompt
        memset(buffer, 0, sizeof(buffer));
        recv(client_socket, buffer, BUFFER_SIZE, 0);
        printf("%s", buffer);

        // Send user choice
        fgets(buffer, BUFFER_SIZE, stdin);
        buffer[strcspn(buffer, "\n")] = 0;  // Remove newline character
        send(client_socket, buffer, strlen(buffer), 0);

        // Handle user's choice
        if (strcmp(buffer, "1") == 0) {
            training_mode(client_socket);  // Start training mode
        } else if (strcmp(buffer, "2") == 0) {
            create_exam_room(client_socket);  // Create a new exam room
        } else if (strcmp(buffer, "3") == 0) {
            view_exam_rooms(client_socket);  // View list of exam rooms
        } else if (strcmp(buffer, "4") == 0) {
            printf("Exiting...\n");
        } else {
            printf("Invalid option.\n");
        }
    }

    // Close socket after completion
    closesocket(client_socket);
    WSACleanup();
    return 0;
}

// Chế độ luyện tập
void training_mode(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};

    // Receive and answer questions
    for (int i = 0; i < 5; i++) {  // 5 questions for training
        memset(buffer, 0, sizeof(buffer));
        recv(client_socket, buffer, BUFFER_SIZE, 0);
        printf("%s", buffer);  // Display question

        // Send answer
        fgets(buffer, BUFFER_SIZE, stdin);
        buffer[strcspn(buffer, "\n")] = 0;  // Remove newline character
        send(client_socket, buffer, strlen(buffer), 0);
    }

    // Receive training result
    memset(buffer, 0, sizeof(buffer));
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("%s", buffer);  // Display result
}

// Tạo phòng thi
void create_exam_room(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};

    // Enter number of questions
    printf("Enter number of questions: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    buffer[strcspn(buffer, "\n")] = 0;
    send(client_socket, buffer, strlen(buffer), 0);

    // Enter time limit
    printf("Enter time limit (minutes): ");
    fgets(buffer, BUFFER_SIZE, stdin);
    buffer[strcspn(buffer, "\n")] = 0;
    send(client_socket, buffer, strlen(buffer), 0);

    // Receive confirmation of exam room creation
    memset(buffer, 0, sizeof(buffer));
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("%s", buffer);  // Display confirmation
}

// Xem danh sách các phòng thi
void view_exam_rooms(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};

    // Receive list of exam rooms
    memset(buffer, 0, sizeof(buffer));
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("%s", buffer);  // Display list of exam rooms
}

// Tham gia phòng thi
void participate_in_exam(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};

    // Receive and answer questions in the exam
    for (int i = 0; i < 5; i++) {  // Adjust based on room's question count
        memset(buffer, 0, sizeof(buffer));
        recv(client_socket, buffer, BUFFER_SIZE, 0);
        printf("%s", buffer);  // Display question

        // Send answer
        fgets(buffer, BUFFER_SIZE, stdin);
        buffer[strcspn(buffer, "\n")] = 0;  // Remove newline character
        send(client_socket, buffer, strlen(buffer), 0);
    }

    // Receive exam result
    memset(buffer, 0, sizeof(buffer));
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("%s", buffer);  // Display result
}
