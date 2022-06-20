#include<stdio.h>

int main(){
	int n, noH, noFi, noTe, rem;
	printf("Enter the number : ");
	scanf("%d", &n);
	noH = n/100;
	noFi = (n%100)/50;
	noTe = ((n%100)%50)/10;
	rem = (((n%100)%50)%10)%5;
	printf("\n\nRequired notes of Rs. 100  :  %d", noH);
	printf("\n\nRequired notes of Rs. 50   :  %d", noFi);
	printf("\n\nRequired notes of Rs. 10   :  %d", noTe);
	printf("\n\nAmount still remaining Rs. :  %d", rem);
	return 0;
}
