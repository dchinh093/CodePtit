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
    ll n,t = 0;
    scanf("%lld", &n);
    ll m = n;
    while (n > 0)
    {
        t = t + gt (n % 10);
        n = n / 10;
    }
    if (m == t)
        printf("1");
    else    
        printf("0");
}