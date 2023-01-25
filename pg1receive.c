#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/msg.h>

int main()
{
void *shared_memory;
char buffer[100];
int shmid;
shmid = shmget((key_t)222,1024,0666);
printf("key of the shared memory is %d\n",shmid);
shared_memory = shmat(shmid,NULL,0);
printf("process attached at %p\n",shared_memory);
printf("data read from sharerd memory is %s\n",(char *)shared_memory);
return 0;
}
