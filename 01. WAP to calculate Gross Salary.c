#include<stdio.h>

int main(){
	float b_salary, d_allowance, h_rent, g_salary;
	printf("Enter the Basic Salary : ");
	scanf("%f", &b_salary);
	d_allowance = ((float)40/100)*b_salary;
	h_rent = ((float)20/100)*b_salary;
	g_salary = b_salary+d_allowance+h_rent;
	printf("\nThe Gross Salary is : %0.2f", g_salary);
	printf("\nDearness Allowance: %0.2f", d_allowance);
    printf("\nHouse Rent: %0.2f", h_rent);
    printf("\nGross Salary: %0.2f", g_salary);
	return 0;
}
