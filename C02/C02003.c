#include <stdio.h>
#include <math.h>

int main()
{
    int m,n;
    int a[105][105] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a[i][1] = 1;
        a[i][n] = 1;
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
                a[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
}