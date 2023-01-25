#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
pid_t pid;
pid=fork();
int status;
if(pid==0){
printf("I am child process\n");
}
else{
printf("I am parent process\n");
sleep(10);
}
}
