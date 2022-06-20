#include<stdio.h>

int main(){
	int n, num, count=0, i, s=1, sum;
	printf("Enter the number: "); //12345
	scanf("%d", &n);
	num = n;
	while(num!=0){
		num=num/10; //1234, 123, 12, 1, 0(loop break next time)
		count++;    //1, 2, 3, 4, 5
	}
	
	for(i=1;i<count;i++){
		s = s*10;	//10, 110, 1110, 11110
		s++;		//11, 111, 1111, 11111
	}
	sum = s+n;
	printf("Output: %d", sum);
}
