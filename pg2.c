#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
fork();
fork();
fork();
printf("hello! welcome to OS Lab!\nPID-%d\n", getpid());
return 0;
}
