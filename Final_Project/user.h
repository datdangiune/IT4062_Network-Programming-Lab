#ifndef USER_H
#define USER_H

int user_exists(const char* username);
int register_user(const char* username, const char* password);
int authenticate_user(const char* username, const char* password);

#endif
