```
#include<stdio.h>
void prime();
void main()
{
	prime();
}
void prime()
{
	int n,i,f=0;
	printf("Enter Any Number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
		}
	}
	if(f==1)
	{
		printf("Not Prime");
	}
	else
	{
		printf("Prime");
	}
}
```
