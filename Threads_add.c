#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>

void *sum(void *ptr){
	
	int x,y,z;
	void *q = ptr;
	x = *(((int*)q)+0);
	y = *(((int*)q)+1);
	z = x+y;
	printf("Addition: %d\n",z);
}

int main()
{
	pthread_t thread1;
	int iret = 0;
	int errorno = 0;
	int array[2] ={0};
	printf("enter your 1st no: ");
	scanf("%d",&array[0]);
	printf("enter your 2nd no: ");
	scanf("%d",&array[1]);
	
	iret = pthread_create(&thread1, NULL, sum, (void*)&array);
	if(iret){
		printf("Thread creation failed\n");
		printf("Error - %d\n",errorno);
	}
	
	printf("Thread creation successfull\n");
	pthread_join(thread1,NULL);
	return 0;
}

	
