//Palindrome Program
#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i,count=0,j,f=1;
	printf("Enter Any Word To Check: ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		count++;
	}
	printf("Length is: %d\n",count);	
	
	for(i=count-1,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	//puts(b);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(b[i]==a[i])
		{
			f=1;
		}		
		else
		{
			f=0;
			printf("Not Palindrome");
			break;
		}
	}	
	if(f==1)
	{
		printf("It's Palindrome");
	}
	
		
}
