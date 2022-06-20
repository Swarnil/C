//Calloc Function
#include<stdio.h>
#include<stdlib.h>
int* c(int n)
{
	int *ptr;
	ptr=(int *)calloc(n,sizeof(int));	
	return ptr;
}

void main()
{
	int n,*ptr,i;
	printf("Enter The Size Of The Array:");
	scanf("%d",&n);
	
	ptr=c(n);

	for(i=0;i<n;i++)
	{
		printf("Enter Value For The Position [%d] : ",i);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Value at [%d] Position : %d \n",i,ptr[i]);
	}
	
}
