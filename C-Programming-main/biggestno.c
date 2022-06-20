#include <stdio.h>
void main()
{
	int n[5],big,i,second;
	printf("Enter 5 Numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	big=n[0];
	for(i=0;i<5;i++)
	{
		if(n[i]>big)
		{
			big=n[i];
		}
	}
	printf("Biggest No. is: %d",big);

	second=n[i];
	
	for(i=0;i<5;i++)
	{
		if(second<=big && second>n[i])
		{
			second=n[i];
		}
	}
	
	printf("Second Biggest No. is: %d",second);
	
	
}

