#include <stdio.h>

int isPrime(int num) {
    for (int foo = 3; foo < (num - 1); foo++)
        if ((num % foo) == 0)
            return 0;
    return 1;
}

int main() {
    
    int use, count = 0, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &use);

    if ((use < 2) && (use > 99999)) {
        printf("Bruh! your range is insane.");
        return 0;
    }
    
    for (int foo = 2; foo <= use; foo++) {
        if (isPrime(foo)) {
            sum += foo;
            if (isPrime(sum))
                count++;
        }
    }
    
    printf("Output: %d", count);
    
    return 0;
}
