#include<stdio.h>
int sum();
void main()
{
	printf("Before Function Calling\n");
	sum(10,20,30);
	printf("\nAfter Function Calling");
}
sum(int a,int b,int c)
{
	printf("Result is: %d",a+b+c);
}
