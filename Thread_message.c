#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <errno.h>

void *Printmsg(void *ptr){
    void *q=ptr;
    printf("%s\n",(char*)q);
}

int main()
{
    pthread_t t1;
    int iret =0;
    int errorno=0;
    char msg[20];
    printf("Enter the message:");
    scanf("%s",msg);
    iret=pthread_create(&t1,NULL,Printmsg,(void*)&msg);
    if(iret)
    {
        printf("Thread Creation Failed\n");
        printf("Error: %d",errorno);
    }
    printf("Thread Creation Successful\n");
    pthread_join(t1,NULL);
    return 0;
}

