#include<stdio.h>

int main (){
	int n,sum=0,m;    
	printf("Enter a number: ");    
	scanf("%d",&n);    
	while(n>0){    
	m=n%10;    //3, 2, 1
	sum=sum+m; //3, 5, 6   
	n=n/10;    //12,1, 0(loop break next time)
	}    
	printf("Sum is=%d",sum);    
	return 0;    
} 
