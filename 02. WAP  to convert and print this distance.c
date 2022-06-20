#include<stdio.h>
int main ()
{
	float km, m, cm, f, inch;
	printf("Enter the distance between two cities in kilometers: ");
	scanf("%f", &km);
	m = km*1000;
	cm = km*100000;
	f = km * 3280.84;
	inch = km * 39370.08;
	printf ("The distance in meters is: %0.3f\n", m);
	printf ("The distance in centemeters is: %0.3f\n", cm);
	printf ("The distance in feet is: %0.3f\n", f);
	printf ("The distance in inch is: %0.3f\n", inch);
	return 0;
}

