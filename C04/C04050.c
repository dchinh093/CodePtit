#include<stdio.h>
#include<string.h>

void qs(int a[10005], int l, int r) 
{
    int i = l, j = r,
        x = a[(l + r) / 2];
    while (i <= j)
    {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            ++i;
            --j;
        }
    }
    if (l < j) qs(a, l, j);
    if (i < r) qs(a, i, r);
}



int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[1005], b[1005], f[10006] = {0}, fx[10006] = {0};
    int x = 0, y = 0;
    for(int i = 1; i <=n ; i++)
    {
        int h;
        scanf("%d", &h);
        if (fx[h] == 0)
        {
            x++;
            a[x] = h;
            f[h] = 1;
            fx[h] = 1;
        }
    }
    memset(fx, 0, sizeof(fx));

    for(int i = 1; i <= m ; i++)
    {
        int h;
        scanf("%d", &h);
        if(fx[h] == 0)
        {
            y++;
            b[y] = h;
            fx[h] = 1;
        }
    }

    n = x;m = y;
    qs(a,1,n);
    qs(b,1,m);
    for (int i = 1; i <= m; i++)
    {
        if (f[b[i]] == 1)
        {
            printf("%d ", b[i]);
            f[b[i]] = 0;
        }
        else
        {
            f[b[i]] = -1;
        }
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
        if (f[a[i]] == 1)
            printf("%d ", a[i]);
    printf("\n");
    for (int i = 1; i <= m; i++)
        if (f[b[i]] == -1)
            printf("%d ", b[i]);
    
}


