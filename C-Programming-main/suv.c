#include <stdio.h>
#include <string.h>

typedef struct account
{
    int num;
    char name[30];
} acc;

int main()
{
    int accNo;
    printf("Enter the number of accounts you want to input the details of : ");
    scanf("%d",&accNo);
    fflush(stdin);
    acc accounts[accNo];

    for (int i = 0; i < accNo; i++)
    {
        printf("Enter the account number %d : ", i + 1);
        scanf("%d", &accounts[i].num);
        fflush(stdin);
        printf("Enter the name of the customer %d : ", i + 1);
        gets(accounts[i].name);
    }
    for (int i = 0; i < accNo; i++)
    {
        printf("\nDetails of customer %d is -- \n", i + 1);
        printf("Account number : %d\n", accounts[i].num);
        printf("Name : %s\n", accounts[i].name);
        printf("\n*********************************\n\n");
    }

    return 0;
}
