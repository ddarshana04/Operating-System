#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
printf("PID OF pg1.c = %d\n", getpid());
char *args[]={"Welcome","to","OS Lab", NULL};
execv("./pg2",args);
printf("Back to pg1.c");
return 0;
}
