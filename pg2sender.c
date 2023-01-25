#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/msg.h>

struct name{
long int msgtype;
char buf[100];
};

int main(){
struct name snd;
int msgid;
printf ("\nEnter the message to be send: ");

while(1)
{
msgid = msgget((key_t)2345, 0666|IPC_CREAT);
if(msgid == -1)
{
printf("Error\n");
}

snd.msgtype = 1;
scanf("%s",snd.buf);
msgsnd(msgid,(void*)&snd,100,0);
printf("\nMessage sent...");
if(strcmp(snd.buf,"quit")==0)
break;
}

strcpy(snd.buf,"\0");
msgctl(msgid,IPC_RMID,0);
return 0;
}
