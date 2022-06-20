#include<stdio.h>
void main()
{
	char n[30];
	int i,count=0,s=0;
	printf("Enter Full Name: ");
	gets(n);
	
	n[0]=n[0]-32;
	printf("%c.",n[0]);
	
	for(i=0;n[i]!=NULL;i++)
	{
		if(n[i]==' ')
		{
			count++;
		}
	}
	for(i=0;n[i]!=NULL;i++)
	{
		if(n[i]==' ' )
		{
			n[i+1]=n[i+1]-32;
			s++;
			if(s<count)
			printf("%c.",n[i+1]);
			else if(s==count)
			break;		
		}
	}
	for(i=i+1;n[i]!=NULL;i++)
	{
		printf("%c",n[i]);
	}
}
