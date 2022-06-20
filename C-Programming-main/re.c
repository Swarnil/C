//Malloc Function
#include<stdio.h>
#include<stdlib.h>
int* m(int n)
{
	int *ptr;
	ptr=(int *)malloc(n*sizeof(int));	
	return ptr;
}
int* r(int n)
{
	int *ptr;
	ptr=(int *)realloc(ptr, n*sizeof(int));	
	return ptr;
}

void main()
{
	int n,*ptr,i;
	printf("Enter The Size Of The Array:");
	scanf("%d",&n);
	
	ptr=m(n);

	for(i=0;i<n;i++)
	{
		printf("Enter Value For The Position [%d] : ",i);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Value at [%d] Position : %d \n",i,ptr[i]);
	}
	
	printf("Enter The Size Of The New Array");
	scanf("%d",&n);
	ptr=r(n);
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
