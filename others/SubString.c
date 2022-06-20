//Search Sub-String Within a String Without Using Pre-Defined Function
#include<stdio.h>
void main()
{
	char s1[40],s2[20];
	int i,j,len,count=0;
	printf("Enter Your String: ");
	gets(s1);
	printf("Enter Sub Stirg You Are Looking For: ");
	gets(s2);
	
	//Finding Length For The Second String
	for(len=0;s2[len]!=NULL;len++)
	{
		count=count+1;
	}
	
	for(i=0,j=0; s1[i]!=NULL && s2[j]!=NULL; i++)
	{
		if(s1[i]==s2[j])
		{
			j++;
		}
		else
		{
			j=0;
		}
	}
	if(j==count)
	{
		printf("Found At Position %d",i-j+1);
	}
	else
	{
		printf("Sorry ! Not Found.");
	}
}
