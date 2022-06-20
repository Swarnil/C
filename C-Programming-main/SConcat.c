//String Concatenation 
#include<stdio.h>
void main()
{
	char n1[20],n2[20],n3[40];
	int i=0,len=0;
	printf("Enter 1st String: ");
	gets(n1);
	
	printf("Enter 2nd String: ");
	gets(n2);
	
	//Input 1st String into 3rd String
	while(n1[i]!='\0')
	{
		n3[i]=n1[i];
		len++;
		i++;
	}
	
	i=0;
	//Input 2nd String into 3rd String
	while(n2[i]!='\0')
	{
		n3[len]=n2[i];
		len++;
		i++;
	}
	n3[len]='\0';
	
	//Print All Strings
	printf("1st String : %s \n",n1);
	printf("2nd String : %s \n",n2);
	printf("New Concatenated String : %s ",n3);
	
}
