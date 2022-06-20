#include<stdio.h>

int main() {
	float len, bre, r, area_r, pmeter_r, area_c, cf_c;
	printf("Enter the length & breadth of a rectangle : ");
	scanf("%f%f", &len, &bre);
	printf("Enter the radius of a circle : ");
	scanf("%f", &r);
	area_r = len*bre;
	pmeter_r = 2*(len+bre);
	area_c = 3.14*r*r;
	cf_c = 2*3.14*r;
	printf("The area & perimeter of the rectangle is : %0.2f, %0.2f\n", area_r, pmeter_r);
	printf("The area & circumference of the circle is : %0.2f, %0.2f", area_c, cf_c);
}
