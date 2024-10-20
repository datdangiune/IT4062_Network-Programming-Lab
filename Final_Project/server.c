#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>

#pragma comment(lib, "Ws2_32.lib")

#define PORT 8080
#define BUFFER_SIZE 1024

void handle_client(SOCKET client_socket);

int main() {
    WSADATA wsaData;
    SOCKET server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    int addr_len = sizeof(client_addr);

    // Kh?i t?o Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        printf("L?i kh?i t?o Winsock\n");
        return 1;
    }

    // T?o socket
    if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("L?i t?o socket\n");
        WSACleanup();
        return 1;
    }

    // Thi?t l?p d?a ch? cho server
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    // Gán d?a ch? vào socket
    if (bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) == SOCKET_ERROR) {
        printf("L?i bind\n");
        closesocket(server_socket);
        WSACleanup();
        return 1;
    }

    // L?ng nghe k?t n?i t? client
    if (listen(server_socket, 3) == SOCKET_ERROR) {
        printf("L?i listen\n");
        closesocket(server_socket);
        WSACleanup();
        return 1;
    }

    printf("Server dang ch?y...\n");

    // Ch?p nh?n k?t n?i t? client
    while ((client_socket = accept(server_socket, (struct sockaddr*)&client_addr, &addr_len)) != INVALID_SOCKET) {
        printf("Client dã k?t n?i\n");
        handle_client(client_socket);
        closesocket(client_socket);
    }

    closesocket(server_socket);
    WSACleanup();
    return 0;
}

void handle_client(SOCKET client_socket) {
    char buffer[BUFFER_SIZE] = {0};
    char *message = "Xin chào, dây là server!\n";
    
    // G?i thông di?p d?n client
    send(client_socket, message, strlen(message), 0);
    
    // Nh?n d? li?u t? client
    recv(client_socket, buffer, BUFFER_SIZE, 0);
    printf("Client: %s\n", buffer);
}

