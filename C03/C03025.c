#include<stdio.h>
#include<math.h>
#define ll long long 

ll nt(ll a)
{
    if (a < 2) 
        return 0; 
    else
    {
        for ( ll i = 2; i <= sqrt(a); i++)
        {
            if ( a % i == 0)
            return 0;
        }
    return 1;
    }
}

ll tong(ll n)
{
    int sum =0;
    while(n != 0)
    {
        ll m = n % 10;
        if(nt(m) == 0)
            return 0;
        sum += m;
        n /= 10;
    }
    if(nt(sum) == 1)
        return 1;
    return 0;
}


int main ()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll a, b, cnt = 0;
        scanf("%lld %lld", &a, &b);
        if(a > b)
            {
                ll tp = a;
                a = b; 
                b = tp;
            }
        for(ll i = a; i <= b; i++)
        {
            if (tong(i) == 1 && nt(i) == 1)
                ++cnt;
        }
        printf("%lld\n", cnt);
    }
     return 0;
}