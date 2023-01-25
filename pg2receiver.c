#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/msg.h>

struct name{
long int msgtype;
char txt[100];
};

int main(){
struct name rcv;
int msgid;
printf ("\nThe receive data is: ");

while(1)
{
msgid = msgget((key_t)2345, 0666|IPC_CREAT);
if(msgid == -1)
{
printf("Error is creating....\n");
}

rcv.msgtype = 1;
msgrcv(msgid,(void*)&rcv,100,0,0);
if(strcmp(rcv.txt,"quit")==0)
break;
printf("%s",rcv.txt);
}
msgctl(msgid,IPC_RMID,0);
return (0);
}

