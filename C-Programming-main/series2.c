#include<stdio.h>
void main()
{
	int i,j,k,c=0;
	for(i=1;i<=10;i++)
	{
		for(k=4;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			c++;
			if(c<=10)
			printf("%d ",c);
	 }
		printf("\n");
	}
}
