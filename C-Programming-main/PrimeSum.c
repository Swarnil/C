
#include<stdio.h>
void main()
{
	int n,i,j,r,f,arr[50],g=0,sum=0,count=0,prr[30],t=0;
	printf("\nEnter The Limit: ");
	scanf("%d",&n);
	printf("\n--------------------------------->>\n");
	//Finding All Prime Number Within Given Range
	for(i=2;i<=n;i++)
	{
		f=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=1;
			}
		}
		if(f==0)
		{
			//Putting The Prime Numbers in an Array
			arr[g]=i;
			g++;
		}
	}
	//Print All Prime Numbers
	printf("All Prime Numbers Are : \n");
	for(i=0;i<g;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(i=0;i<g;i++)
	{	
		sum=0;
		for(j=0;j<g;j++)
		{
			sum=sum+arr[j];
			if(sum==arr[i])
			{
				if(sum>2)
				{	
					count++;
					prr[t]=arr[i];
					t++;
				}
			}
		}
	}
	printf("\n--------------------------------->> \n");
	printf("Total No. Of Such Type Of Prime Numbers: ");
	printf("%d",count);
	
	printf("\n--------------------------------->> \n");
	printf("They Are: ");
	for(i=0;i<t;i++)
	{
		printf("%d ",prr[i]);
	}
}
