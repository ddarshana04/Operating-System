#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
pid_t pid;
pid=fork();
int status;
if(pid==0){
printf("Child\n");
sleep(10);
exit(10);
}
else{
printf("Parent\n");
wait(&status);
printf("Exit status is %d\n",WEXITSTATUS(status));
}
}
