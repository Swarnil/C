//Capitalize First Character of Each Word of a Sentence
#include<stdio.h>
void main()
{
	char a[40];
	int i;
	printf("Enter Any String: ");
	gets(a);
	a[0]=a[0]-32;
	printf("%c",a[0]);
	for(i=1;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
		}
		printf("%c",a[i]);
	}
	
}
