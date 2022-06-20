#include<stdio.h>
void main()
{
	char a[10],b[10],c[10];
	int i;
	printf("Enter First Word: ");
	gets(a);
	
	printf("Enter 2nd Word: ");
	gets(b);
	
	printf("Enter 3rd Word: ");
	gets(c);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==b[i])
		{
			if(b[i]==c[i])
			printf("%c",c[i]);
		}
		else
		{
		break;
		}
	}
}
