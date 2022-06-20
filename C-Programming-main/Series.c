
#include<stdio.h>
int check();
void main()
{	
	int n,r;
	printf("Enter Any Number:");
	scanf("%d",&n);
	r=check(n);
	if(r%2==0)
printf("Even");			
	else
	{
		printf("Odd");
	}
	
}
int check(int x)
{	
	int r=x%2;
	return(r);
}
