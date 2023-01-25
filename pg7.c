#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main(){
pid_t pid;
pid=fork();
int var=5;
if(pid==0){
var=var+1;
printf("I am child process\n");
printf("%d\n",var);
}
}

