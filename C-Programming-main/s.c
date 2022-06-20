#include<stdio.h>
void main()
{
	struct student
	{
		int r;
		char n;
	};
	struct student s;
	printf("Enter Roll:");
	scanf("%d",&s.r);
	fflush(stdin);
	printf("Enter Name:");
	scanf("%c",&s.n);
	
	printf("%d %c",s.r,s.n);
}
	
	


