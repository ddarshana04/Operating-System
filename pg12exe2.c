#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
printf("We are in pg2.c\n");
printf("PID of pg2.c = %d\n",getpid());
return 0;
}

