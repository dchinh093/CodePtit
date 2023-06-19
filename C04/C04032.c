#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int tp = *a;
    *a = *b;
    *b = tp;
}

int skg(int n)
{
    while (n > 0)
    {
        int tp = n % 10;
        n = n / 10;
        if ((n % 10) > (tp % 10))
            return 0;
    }
    return 1;
}

int main()
{
    int max = 0;
    int i = 1, n = 0;
    int a[100004];
    int c[100004] = {0};
    char kt = ' ';
    int x;
    while ((scanf("%d", &x)) != -1)
    {
        if (skg(x))
        {
            a[i] = x;
            c[i] = 1;
            i++;
            ++n;
        }
    }

    for (int j = 1; j <= n; j++)
    {
        if (a[j] == 0)
            continue;
        for (int k = j + 1; k <= n; k++)
        {
            if (a[j] == a[k])
            {
                c[j]++;
                a[k] = 0;
            }
        }
        if (c[j] > max)
            max = c[j];
    }

    while (max > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (c[i] == max && a[i] != 0)
                printf("%d %d\n", a[i], max);
        }
        max--;
    }

    return 0;
}
