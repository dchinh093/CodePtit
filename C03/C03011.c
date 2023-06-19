#include <stdio.h>
#include <math.h>
#define ll long long

ll gt (ll k)
{
    ll s = 1;
    for (ll i = 1; i <= k; i++)
        s = s * i;
    return s;
}

int main()
{
    ll n,h;
    scanf("%lld %lld", &n, &h);
    if (n >= h)
    {
        ll tmp = n;
        n = h;
        h = tmp;
    }
    for (ll i = n; i <= h; i++)
    {
        ll m = i,t = 0;
        while (m > 0)
        {
            t = t + gt (m % 10);
            m = m / 10;
        }
        if(t == i)
            printf("%d ", i);
    }
    return 0;
}