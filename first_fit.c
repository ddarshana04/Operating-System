#include<stdio.h>
#define max 25

void main() {
int frag[25],b[25],f[25],i,j,nb,nf,temp;
static int bf[25],ff[25];

printf("\nEnter the number of blocks: ");
scanf("%d",&nb);

printf("Enter the number of processes: ");
scanf("%d",&nf);

printf("\nEnter the size of the blocks: \n");
for(i=1;i<=nb;i++) {
	printf("Block no-%d: ",i);
	scanf("%d",&b[i]);
}

printf("\nEnter the size of processes: \n");
for(i=1;i<=nf;i++) {
	printf("Process no-%d: ",i);
	scanf("%d",&f[i]);
}

for(i=1;i<=nf;i++){
for(j=1;j<=nb;j++) {
   if(bf[j]!=1) {
	temp=b[j]-f[i];
        if(temp>=0) {
		ff[i]=j;
		break;
	}
   }
}
frag[i]=temp;
bf[ff[i]]=1;
}

printf("\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment");
for(i=1;i<=nf;i++) {
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
}
printf("\n");
}

