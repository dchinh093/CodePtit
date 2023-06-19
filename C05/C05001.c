#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    int a[100][100];
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}