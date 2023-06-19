#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int h = 1; h <= t; h++)
    {
        int n,m;
        int a[100][100];
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                scanf("%d", &a[i][j]);
        printf("Test %d:\n", h);
        for (int i = 2; i <= n; i++)
        {
            for (int j = 2; j <= m; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }
}