#include <stdio.h>
#include <string.h>
#include "user.h"

// Check if user already exists
int user_exists(const char* username) {
    FILE* file = fopen("users.txt", "r");
    if (!file) {
        printf("Cannot open users.txt\n");
        return 0;  // Cannot open file
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        char stored_username[256];
        sscanf(line, "%[^,]", stored_username);  // Extract username from file
        if (strcmp(stored_username, username) == 0) {
            fclose(file);
            return 1;  // User already exists
        }
    }

    fclose(file);
    return 0;
}

// Register new user
int register_user(const char* username, const char* password) {
    // Loại bỏ ký tự không mong muốn, như khoảng trắng, hoặc các ký tự không hợp lệ.
    if (strcspn(username, " \n\r") != strlen(username)) {
        printf("Invalid characters in username.\n");
        return 0;
    }

    if (user_exists(username)) {
        return 0;  // Người dùng đã tồn tại
    }

    FILE* file = fopen("users.txt", "a");
    if (!file) {
        printf("Cannot open users.txt\n");
        return 0;  // Không thể mở file
    }

    fprintf(file, "%s,%s\n", username, password);  // Lưu username và password
    fclose(file);
    return 1;
}


// Authenticate user during login
int authenticate_user(const char* username, const char* password) {
    FILE* file = fopen("users.txt", "r");
    if (!file) {
        printf("Cannot open users.txt\n");
        return 0;  // Cannot open file
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        char stored_username[256], stored_password[256];
        sscanf(line, "%[^,],%s", stored_username, stored_password);  // Tách username và password từ file
        printf("Comparing with stored username: %s and stored password: %s\n", stored_username, stored_password);
        if (strcmp(stored_username, username) == 0 && strcmp(stored_password, password) == 0) {
            fclose(file);
            return 1;  // Authentication successful
        }
    }

    fclose(file);
    return 0;  // Invalid username or password
}

