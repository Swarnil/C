
#include<stdio.h>
#include<math.h>
void main()
{
	int t,g,slab,year,k=0,bank[2],i;
	float p,sum=0,in,squre=0,emi;
	printf("Enter Loan Amount : ");
	scanf("%f",&p);
	
	printf("Enter Time(In Years) : ");
	scanf("%d",&t);
	printf("\n");
	
	for(g=0;g<2;g++)
	{
		printf("How Many Slabs For Bank-%d : ",g+1);
		scanf("%d",&slab);
		sum=0;
		for(i=0;i<slab;i++)
		{
			printf("Enter Years for Slab-%d : ",i+1);
			scanf("%d",&year);
			
			printf("Enter Interest For Slab-%d : ",i+1);
			scanf("%f",&in);
			
			printf("\n");
			
			squre=pow((1+in),year*12);
			emi=(p*(in))/(1-1/squre);
			sum=sum+emi;
		}
		printf("------------------------------- \n\n");
		bank[k]=sum;
		k++;
	}
	if(bank[0]<bank[1])
	{
		printf(" *** Bank A is Suitable For You ***");
	}	
	else
	{
		printf(" *** Bank B is Suitable For You ***");
	}
}

