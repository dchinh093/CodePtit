#include <stdio.h>
#include <math.h>
#define ll long long

int sole(ll a)
{
    ll d = 0;
    while(a > 0)
    {
        d = d + a % 10;
        if ((a % 10) % 2 == 1)
            a = a / 10;
        else    
            return 0;
    }
    if ( d % 2 == 0)
        return 0;
    return 1;
}

int ktra(ll a)
{
    ll sum = 0, b = a;
    ll cs = 10;
    while (a >0 )
    {
        sum = sum * 10 + a % 10;
        a = a / 10;
    }
    return sum == b;
}

int main()
{
    int t;
    scanf("%d", &t);
    int ts = 1;
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        // if (kt(n) && ktra(n)==n)
        //     printf("YES\n");
        if (ktra(n) && sole(n))
            printf("YES\n");
        else    
            printf("NO\n");
        
    }
}