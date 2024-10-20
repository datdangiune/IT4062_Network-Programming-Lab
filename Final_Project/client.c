#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>

#pragma comment(lib, "Ws2_32.lib")

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    WSADATA wsaData;
    SOCKET client_socket;
    struct sockaddr_in server_addr;
    char buffer[BUFFER_SIZE] = {0};
    char *message = "Xin chào, tôi là client\n";

    // Kh?i t?o Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        printf("L?i kh?i t?o Winsock\n");
        return 1;
    }

    // T?o socket
    if ((client_socket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("L?i t?o socket\n");
        WSACleanup();
        return 1;
    }

    // Thi?t l?p d?a ch? cho server
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // K?t n?i d?n server
    if (connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == SOCKET_ERROR) {
        printf("L?i k?t n?i d?n server\n");
        closesocket(client_socket);
        WSACleanup();
        return 1;
    }

    // G?i thông di?p d?n server
    send(client_socket, message, strlen(message), 0);
    
    // Nh?n ph?n h?i t? server
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("Server: %s\n", buffer);

    closesocket(client_socket);
    WSACleanup();
    return 0;
}

