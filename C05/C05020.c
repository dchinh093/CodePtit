#include<stdio.h>
#include<math.h>



int main ()
{
    int f[85];
    int i = 3;
    f[1] = 0, f[2] = 1;
    while(i <= 82)
    {
        f[i] = f[i-1] + f[i-2];
        ++i;
    }
    int n;
    scanf("%d", &n);
    int  a[90][90];
    int h1 = 1, h2 = n, c1 = 1, c2 = n, cnt = 1;
    while(h1 <= h2 && c1 <= c2)
    {
        for(int i = c1; i <= c2; i++)
        {
            a[h1][i] = f[cnt];
            ++cnt;
        }
        ++h1;
        for(int i = h1; i <= h2; i++)
        {
            a[i][c2] = f[cnt];
            ++cnt;
        }
        --c2;
        if(c1 <= c2)
        {
            for(int i = c2; i >= c1; i--)
            {
                a[h2][i] = f[cnt];
                ++cnt;
            }
            --h2;
        }
        if(h1 <= h2)
        {
            for(int i = h2; i >= h1; i--)
            {
                a[i][c1] =f[cnt];
                ++cnt;
            }
            ++c1;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;      
}