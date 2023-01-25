#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

void *fun1();
void *fun2();
int shared=1; 

int main()
 {
 	pthread_t thread1, thread2;
 	pthread_create(&thread1, NULL, fun1, NULL);
 	pthread_create(&thread2, NULL, fun2, NULL);
 	pthread_join(thread1, NULL);
 	pthread_join(thread2,NULL);
 	printf("\nFinal value of shared is %d\n",shared); //prints the last updated value of shared variable
 }
 
 void *fun1()
{
    int x;
    x=shared;
    printf("\nThread1 reads the value of shared variable as: %d\n",x);
    x++;  //T-1 increments its value
    printf("\nLocal updation by Thread1: %d\n",x);
    sleep(1);  //T-1 is preempted by T-2
    shared=x; //T-1 updates the value of shared variable
    printf("\nValue of shared variable updated by Thread1 is: %d\n",shared);
}

void *fun2()
 {
     int y;
     y=shared;//T-2 reads value of shared variable
     printf("Thread2 reads the value as %d\n",y);
     y--;  //T-2 increments its value
     printf("\nLocal updation by Thread2: %d\n",y);
     sleep(1); //T-2 is preempted by thread 1
     shared=y; //T-2 updates the value of shared variable
     printf("\nValue of shared variable updated by Thread2 is: %d\n",shared);
 }
 
