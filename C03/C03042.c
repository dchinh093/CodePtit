#include <math.h>
#include <stdio.h>

int check(int n)
{
    int dig = -1;
    while (n > 0)
    {
        if (n % 10 <= dig)
            return 0;
        dig = n % 10;
        n = n / 10;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, d = 0;
        scanf("%d%d", &n, &m);
        if (n > m)
        {
            int tg = n;
            n = m;
            m = tg;
        }
        for (int i = n; i <= m; i++)
        {
            if (check(i))
                d++;
        }
        printf("%d\n", d);
    }
    
}