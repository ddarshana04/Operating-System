#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
pid_t pid;
pid=fork();
printf("hello world\n");
}
