#include<stdio.h>
#include<string.h>
void SubString()
{
	char s1[30],s2[30];
	int i,j,N,M;
	printf("Enter Any String:");
	gets(s1);
	
	printf("Enter The String You Want to Search: ");
	gets(s2);
	
	M = strlen(s1);
    N = strlen(s2);
	
	 for (i = 0; i <= M - N; i++)
	 {
        for (j = 0; j < N; j++)
            if (s1[i + j] != s2[j])
                break;
 
        if (j == N)
            printf("Present at index %d ",i );
            break;
    }
    printf("Not present");
}
void main()
{
	SubString();
}
