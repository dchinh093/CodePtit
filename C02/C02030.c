#include<stdio.h>


int main ()
{
    int n; 
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int k = -1;
        for(int j = 1; j <= i; j++ )
        {
            k = k + 2;
            printf("%c", k + 95 + 'A' -'a');
        }
        for(int j = 2; j <= i; j++ )
        {
            k = k - 2;
            printf("%c", k + 95 + 'A' -'a');
        }
        printf("\n");
    }
    return 0;
}