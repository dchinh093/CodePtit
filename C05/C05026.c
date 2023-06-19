#include<stdio.h>
#include<math.h>

int main()
{
    int f[1005] ={0};
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= 1004; i++)
    {
        if (f[i] == 0)
        for (int j = 2; j * i <= 1004; j++)
            f[j * i] = 1;
    }

    int n;
    scanf("%d", &n);
    int a[32][32];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1;j <= n; j++)
            scanf("%d", &a[i][j]);
    }

    int max = 0, h;
    for(int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for(int j = 1;j <= n; j++)
        {
            if(f[a[i][j]] == 0)
                cnt++;
        }
        if(cnt > max)
        {
            h = i;
            max = cnt;
        }
    }
    printf("%d\n", h);
    for(int i = 1; i <= n; i++)
    {
        if(f[a[h][i]] == 0)
            printf("%d ", a[h][i]);
    }
    return 0;
    
}



