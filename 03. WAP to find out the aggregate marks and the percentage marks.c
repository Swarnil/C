#include<stdio.h>

int main()
{
    int beng, eng, phy, chem, math, sum;
    float perc;
    printf("Enter the marks of Bengali: ");
    scanf("%d", &beng);

    printf("Enter the marks of English: ");
    scanf("%d", &eng);

    printf("Enter the marks of Physics: ");
    scanf("%d", &phy);

    printf("Enter the marks of Chemistry: ");
    scanf("%d", &chem);

    printf("Enter the marks of Mathmatics: ");
    scanf("%d", &math);

    sum = beng+eng+phy+chem+math;

    perc = (sum/500.0)*100;

    printf("\nAggregate marks: %d", sum);
    printf("\nPercentage marks: %0.2f %%", perc);
    return 0;
}
