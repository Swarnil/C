//Finding Lenghth of the last word of a string
#include<stdio.h>
void main()
{
	char n[40];
	int i,j=0,count=0;
	printf("Enter Any String:");
	gets(n);
	for(i=0;n[i]!=NULL;i++)
	{
		count++;
	}
	for(i=count-1;i>0;i--)
	{
		
		if((n[i] >= 'a' && n[i] <= 'z') || (n[i] >= 'A' && n[i] <= 'Z'))
		j++;
		if(j!=0 && n[i]==' ')
		break;
	}
	printf("Length of the last word is: %d",j);
}
