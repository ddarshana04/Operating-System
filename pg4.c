#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
 if (fork()&&fork())
 {
 fork();
 }
printf("1\n");
return 0;
}
