//Palindrome Program
#include<stdio.h>
void main()
{
	char a[10],b[10],c[10];
	int i,count=0;
	printf("Enter Any Word To Check: ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		count++;
	}
	printf("Length is: %s",count);
	
}
