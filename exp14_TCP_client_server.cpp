#include<stdlib.h>

#include<stdio.h>

#include<sys/types.h>

#include<sys/socket.h>

#include<netinet/in.h>

#include<unistd.h>

#include<string.h>

#include <arpa/inet.h>

int main()

char buff[512];

} struct sockaddr_in stSockAddr, cli addr, SocketFD=socket(AF_INET,SOCK STREAM,0);

int SocketFD;

5G

LTE

if(SocketFD<0)

perror("can not creat socket"); {

exit(EXIT FAILURE),

} bzero(&stSockAddr, sizeof(stSockAddr));

stSockAddr.sin family=AF_INET;

stSockAddr.sin port htons(1109);

stSockAddr.sin_addr.s_addr=INADDR_ANY;

if(bind(SocketFD (struct sockaddr*)&stSockAddr, sizeof(stSockAddr))<0) {

perror("can not bind");

close(SocketFD),

exit(EXIT_FAILURE),

} int a sizeof(cli_addr), listen(SocketFD,2);

int connectFD-accept(SocketFD,(struct sockaddr*)&cli_addr,&a); if(connectFD<()) {

perror("can not connect");

close(SocketFD);

exit(EXIT_FAILURE); }

while(1)

{ printf("\n Receiving data from client....."),

read(connectFD,buff,512);