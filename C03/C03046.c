#include <stdio.h>
#include <math.h>

int kt(int n)
{
    int d = 0,s = 0, m = n;
    while ( n > 0)
    {
        d = d * 10 + n % 10;
        s = s + n % 10;
        if (n % 10 == 4)
            return 0;
        else
            n = n / 10;
    }
    if (d == m && s % 10 == 0)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = pow(10,n - 1); i <= pow(10,n) - 1; i++)
            if (kt(i))
                printf("%d ", i);
        printf("\n");
    }
}