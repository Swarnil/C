```
#include<stdio.h>
void main()
{
	int a[4][4],i,j;
	printf("Enter Values in Array: \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter Value For [%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Output
	printf("\n <**** OUTPUT ****> \n\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i==j))
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
```
