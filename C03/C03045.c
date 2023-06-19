#include<stdio.h>
#include<math.h>
#define ll long long

int main ()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll n;
        scanf("%lld", &n);
        ll res;
        for(ll i = 2; i <= sqrt(n); i++)
        {
            while(n % i == 0)
            {
                n = n / i;
                res = i;
            }
        }
        if( n != 1) 
            res = n;
        printf("%lld\n", res);
    }
    return 0;

}