#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
pid_t pid;
pid = fork();
if(pid==0)
{
printf("I am child Process\n");
}
else{
printf("I am Parent Process\n");
}
}

