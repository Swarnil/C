
#include<stdio.h>
void prime()
{
	int n,i,flag=0;
	printf("Enter Any Number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("Not Prime Number");
	}
	else
	{
		printf("Prime Number");
	}
}
void main()
{
	prime();
}
