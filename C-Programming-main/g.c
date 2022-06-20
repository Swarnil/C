#include<stdio.h>
void gopal()
{
	printf("Gopal");
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n Call");
		printf("\nChoice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: gopal();
					break;
			case 0 :exit(1);
		}
	}
}
