//Compare Between Two String
#include<stdio.h>
void main()
{
	char s1[30],s2[30];
	int i,d;
	printf("Enter 1st String: ");
	gets(s1);
	
	printf("Enter 2nd String: ");
	gets(s2);
	
	printf("\n");
	i=0;
	while(s1[i]!='\0')
	{
		if(s1[i]==s2[i])
		{
			printf("Character Matched\n");
		}
		else
		{
			d=s1[i]-s2[i];
			printf("Character Not Matched, Distance: %d \n",d);
		}
		i++;
	}
}

