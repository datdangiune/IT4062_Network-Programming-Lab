#ifndef QUESTION_H
#define QUESTION_H

#include <winsock2.h>

#define BUFFER_SIZE 1024

// Hàm đọc câu hỏi từ file
void load_questions(const char *filename);

// Hàm gửi câu hỏi cho client
void send_question(SOCKET client_socket, int question_index);

// Hàm kiểm tra câu trả lời của người dùng
int check_answer(const char *user_answer, int question_index);

#endif
