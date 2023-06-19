#include <stdio.h>
#include <math.h>
#define ll long long

int kt(ll n)
{
    int d = 0;
    if (n % 2 == 0)
        return 0;
    while ( n > 0)
    {
        if ((n % 10) % 2 == 1)
            d++;
        else
            d--;
        n = n / 10;
    }
    if (d > 0)
        return 1;
    else    
        return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
            if (kt(n))
                printf("YES\n");
            else    
                printf("NO\n");
    }
}