#include <stdio.h>
#include <math.h>

int main()
{
    int m,n,p,q;
    int a[1003][1003], b[1003][1003], c[1003][1003], d[1003][1003] = {0}, e[1003][1003] = {0};
    scanf("%d%d%d%d", &n, &m, &p, &q);

    for (int i = 1; i <= n; i ++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 1; i <= m; i ++)
        for (int j = 1; j <= p; j++)
            scanf("%d", &b[i][j]);    
    for (int i = 1; i <= p; i ++)
        for (int j = 1; j <= q; j++)
            scanf("%d", &c[i][j]);

    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p; j++)
            for (int k = 1; k <= m; k++)
                d[i][j] = d[i][j] + a[i][k] * b[k][j];
    }
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= q; j++)
            for (int k = 1; k <= p; k++)
                e[i][j] = e[i][j] + d[i][k] * c[k][j];
    }
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= q; j++)
            printf("%d ", e[i][j]);
        printf("\n");
    }
}