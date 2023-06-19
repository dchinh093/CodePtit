#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int h = 1; h <= k; h++)
            printf("~");
        for (int j = 1; j <= m; j++)
        {
            if (i != 1 && i != n)
            {
            if (j == 1 || j == m)
                printf("*");
            else
                printf(".");
            }
            else
                printf("*");
        }
        printf("\n");
        k++;
    }
    return 0;
}
    