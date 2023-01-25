#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

void main()
{
pid_t pid;
pid=fork();
int status;
if(pid==0){
printf("Child\n");
sleep(10);
}
else{
printf("Parent\n");
wait(&status);
printf("I am in parent process");
}
}
