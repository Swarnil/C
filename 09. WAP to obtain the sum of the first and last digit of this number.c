#include <stdio.h>

int main() {
    int n, lnum, fnum, n2, d=1, sum;
    printf("Enter the number : "); //12345
    scanf("%d", &n);
    lnum = n%10;
    n2 = n;
    while(n2!=0){
        n2 = n2/10; //1234, 123, 12, 1, 0 (loop break next time)
        d = d*10;   //10, 100, 1000, 10000, 100000
    }
    d = d/10; // 10000
    fnum = n/d;
    sum = fnum+lnum;
    printf("The sum of first and last number is : %d", sum);
    return 0;
}
