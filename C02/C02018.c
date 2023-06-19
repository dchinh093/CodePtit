#include<stdio.h>


int main ()
{
    int n; 
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++ )
            printf("~");
        int k = -1;
        for(int j = 1; j <= i; j++ )
            printf("%d", k+=2);
        for(int j = 2; j <= i; j++ )
            printf("%d", k-=2);
        printf("\n");
    }
    return 0;
}