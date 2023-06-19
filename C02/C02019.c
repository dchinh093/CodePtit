#include<stdio.h>


int main ()
{
    int n; 
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int k = 0;
        for(int j = 1; j <= i; j++ )
            printf("%d", k+=2);
        for(int j = 2; j <= i; j++ )
            printf("%d", k-=2);
        printf("\n");
    }
    return 0;
}