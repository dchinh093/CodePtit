#include <stdio.h>
#include <math.h>
#define ll long long

int sonto (ll a)
{
    if (a < 2) 
        return 0; 
    for ( int i = 2; i <= sqrt(a); i++)
        {
            if ( a % i == 0)
            return 0;
        }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll n,m;
        scanf("%lld%lld", &n, &m);
        int d = 0;
        for (ll i = sqrt(n); i <= sqrt(m); i++)
        {
             
                if (sonto (i))
                    d++;
                else
                continue;
        }
        printf("%d\n", d);

    }
}