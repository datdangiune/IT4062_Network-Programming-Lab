#define _WIN32_WINNT 0x0501 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include <ws2tcpip.h>  

#pragma comment(lib, "ws2_32.lib")

void lookup_by_ip(char *ip_address) {
    WSADATA wsa;
    struct sockaddr_in sa;
    char host[NI_MAXHOST];
    char service[NI_MAXSERV];

    WSAStartup(MAKEWORD(2,2), &wsa);
    
    memset(&sa, 0, sizeof(struct sockaddr_in));
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = inet_addr(ip_address);

    int result = getnameinfo((struct sockaddr *)&sa, sizeof(sa), host, sizeof(host), service, sizeof(service), NI_NAMEREQD);
    
    if (result != 0) {
        printf("No domain name found for IP: %s\n", ip_address);
    } else {
        printf("Main name: %s\n", host);
    }

    WSACleanup();
}

void lookup_by_domain(char *domain) {
    WSADATA wsa;
    struct addrinfo hints, *res, *p;
    int status;

    WSAStartup(MAKEWORD(2,2), &wsa);

    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;

    if ((status = getaddrinfo(domain, NULL, &hints, &res)) != 0) {
        printf("No information found\n");
        WSACleanup();
        return;
    }

    printf("Main IP: %s\n", inet_ntoa(((struct sockaddr_in *)res->ai_addr)->sin_addr));
    
    printf("Alternate IPs: \n");
    for (p = res->ai_next; p != NULL; p = p->ai_next) {
        printf("%s\n", inet_ntoa(((struct sockaddr_in *)p->ai_addr)->sin_addr));
    }

    freeaddrinfo(res);  
    WSACleanup();
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s option parameter\n", argv[0]);
        return 1;
    }

    int option = atoi(argv[1]);
    char *parameter = argv[2];

    if (option == 1) {
        lookup_by_ip(parameter);
    } else if (option == 2) {
        lookup_by_domain(parameter);
    } else {
        printf("Invalid option\n");
    }

    return 0;
}

