#include<stdio.h>

int main(){
	int n, num=0;
	printf("Enter a number : ");//12345
	scanf("%d", &n);
	while(n!=0){
		num = num*10;    // 0, 50, 540, 5430, 54320
		num = n%10+num;  // 5+0, 54, 543, 5432, 54321
		n = n/10;        // 1234, 123, 12, 1, 0(loop break next time)
	}
	printf("The reverse number is : %d", num);
	return 0;
}
