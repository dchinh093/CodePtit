#include<stdio.h>

 
int main ()
{
    int m, n;
    scanf("%d%d", &m,&n);
    int a[100][100];
    for(int i = 1; i <= m;i++)
    {
        for(int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    }
    int l, r;
    scanf("%d%d", &l, &r);
    for(int i = 1; i <= m;i++)
    {
        int tp = a[i][l];
        a[i][l] = a[i][r];
        a[i][r] = tp;
    }
    for(int i = 1; i <= m;i++)
    {
        for(int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;

}