#include <stdio.h>
#include <math.h>
#define ll long long


int main()
{
    ll a[15];
    a[0] = 0; a[1] = 1; a[8] = 0; a[9] = 0;
    a[2] = -1; a[3] = -1; a[4] = -1; a[5] = -1;a[6] = -1; a[7] = -1;

    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n, d = 1, s = 0, kt = 1;
        scanf("%lld", &n);
        while (n > 0)
        {
            if (a[n % 10] == - 1)
                kt = 0;
            s = s + d * a[(n % 10)];
            d = d * 10;
            n = n / 10;
        }
        if (kt == 0 || s == 0)
            printf("INVALID\n");
        else
            printf("%lld\n", s);
    }
}