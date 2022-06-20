#include<stdio.h>
void main()
{
	float amt,dis,price;
	printf("Enter The Amount: ");
	scanf("%f",&amt);
	if(amt>=5000)
	{
		dis=(amt/100)*15;
		
	}
	else if(amt>=3000)
	{
		dis=(amt/100)*10;
	}
	else
	{
		dis=(amt/100)*8;
	}
	price=amt-dis;
	printf("Final Amount is :%f",price);
}
