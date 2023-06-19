#include <stdio.h>
#include <math.h>

int main()
{
    int a[100005] = {0};
    int d = 0;
    a[1] = 1;a[0] = 1;
    for (int i = 2; i <= 100005; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; i * j <= 100005; j++)
                a[i * j] = 1;
        }
    }

    int t;
    scanf("%d", &t);
    for (int h = 1; h <= t; h++)
    {
        int n;
        scanf("%d", &n);
        int c[100005], b[100005] = {0};
        int d = 0;
        for (int i = 1; i <= n; i++)
        {
            int k;
            scanf("%d", &k);
            if (a[k] == 0)
            {
                if (k > d)
                    d = k;
                b[k]++;
            }
        }

        printf("Test %d:\n", h);
        for ( int i = 1; i <= d; i++)
        if (b[i] != 0)
            printf("%d xuat hien %d lan\n", i, b[i]);
    }
}