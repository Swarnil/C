#include<stdio.h>

int main () {
	float ft, ct;
	printf("Enter the temperature in Fahrenheit : ");
	scanf("%f", &ft);
	ct = (ft-32)*5/9;
	printf("The temperature in Centigrade is : %0.2f", ct);
	return 0;
}
