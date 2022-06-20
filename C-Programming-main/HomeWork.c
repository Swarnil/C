
#include<stdio.h>
void main()
{
	int a[3][3],sum=0,i,j;
	printf("Enter Values: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Values For [%d] [%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=a[j][i]+sum;
		}
		printf("Sum = %d\n",sum);
		sum=0;
	}
	
}

