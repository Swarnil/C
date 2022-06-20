#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,s,t=0;
    printf("Enter Your String:");
    gets(a);
    s = strlen(a);
    for (i=s-1;i>0; i--)
    {

        if(a[i]==' ')
        break;
        t++;
    }
    printf("Length of the last word is %d",t);
}
