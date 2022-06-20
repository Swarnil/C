#include<stdio.h>
void main()
{
	int a,*p;
	a=10;
	p=&a;
	printf("%d",sizeof(a));
	printf("\n%d",sizeof(p));
	
}
