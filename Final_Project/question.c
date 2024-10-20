#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "question.h"

// Tối đa 100 câu hỏi trong question.txt
#define MAX_QUESTIONS 100

// Cấu trúc để lưu trữ câu hỏi và câu trả lời đúng
typedef struct {
    char question[BUFFER_SIZE];
    char correct_answer[BUFFER_SIZE];
} Question;

Question questions[MAX_QUESTIONS];  // Mảng lưu các câu hỏi
int total_questions = 0;  // Số lượng câu hỏi đã đọc từ file

// Hàm đọc câu hỏi từ file question.txt
void load_questions(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open %s\n", filename);
        return;
    }

    char buffer[BUFFER_SIZE];
    int question_index = 0;

    while (fgets(buffer, BUFFER_SIZE, file)) {
        if (strncmp(buffer, "Question", 8) == 0) {
            // Đọc câu hỏi
            strcpy(questions[question_index].question, buffer);

            // Đọc các lựa chọn A, B, C, D
            for (int i = 0; i < 4; i++) {
                fgets(buffer, BUFFER_SIZE, file);
                strcat(questions[question_index].question, buffer);  // Nối lựa chọn vào câu hỏi
            }

            // Đọc câu trả lời đúng (bắt đầu bằng "Answer:")
            fgets(buffer, BUFFER_SIZE, file);
            sscanf(buffer, "Answer: %s", questions[question_index].correct_answer);  // Lưu câu trả lời đúng

            question_index++;
        }
    }

    total_questions = question_index;  // Cập nhật tổng số câu hỏi đã đọc
    fclose(file);
}

// Hàm gửi câu hỏi cho client
void send_question(SOCKET client_socket, int question_index) {
    char buffer[BUFFER_SIZE];

    if (question_index >= total_questions) {
        strcpy(buffer, "Invalid question index\n");
        send(client_socket, buffer, strlen(buffer), 0);
        return;
    }

    // Gửi câu hỏi tương ứng với question_index
    strcpy(buffer, questions[question_index].question);
    send(client_socket, buffer, strlen(buffer), 0);
}

// Hàm kiểm tra câu trả lời của người dùng
int check_answer(const char *user_answer, int question_index) {
    if (question_index >= total_questions) {
        return 0;  // Câu hỏi không hợp lệ
    }

    // So sánh câu trả lời của người dùng với câu trả lời đúng
    if (strcmp(user_answer, questions[question_index].correct_answer) == 0) {
        return 1;  // Câu trả lời đúng
    }
    return 0;  // Câu trả lời sai
}
