#pragma once
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>

typedef struct c_Server{
	int Socket_FD;
	int* Connect_FD;
}c_Server_t;
