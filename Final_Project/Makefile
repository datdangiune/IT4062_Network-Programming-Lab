all: server client

server: server.c user.c question.c
	gcc server.c user.c question.c -o server -lws2_32

client: client.c
	gcc client.c -o client -lws2_32

clean:
	rm -f server client
