#include<stdio.h>

int main (){
	int c,d;
	printf("Enter the Values of C and D : ");
	scanf("%d%d", &c, &d);
	c=c+d; //3+2
	d=c-d; //5-2
	c=c-d; //5-3
	printf("The new Values of C and D are : %d, %d", c, d);
}
