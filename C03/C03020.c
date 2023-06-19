#include<stdio.h>
#include<math.h>
#define ll long long

int kt(ll n )
{ 
    int m = 0, s= 0, k = 0;
    ll l = n;
    while(n >= 1)
    {
        if((n % 10 ) == 6)
            k = 1;
        s = s + n%10;
        m = (m * 10 + n % 10);
        n=n/10;
       
    }
    return (m == l && s % 10 == 8 && k == 1);
}
        
        
int main ()
{
    long long a, b; 
    int cnt = 0;
    scanf("%lld %lld", &a, &b);
    if(a>= b)
    {
        for(ll j = b; j <= a;j++)
        {
            if(kt(j))
                printf("%d ", j);
        }
    }
    else
    {
        for(ll j = a; j <= b;j++)
        {
            if(kt(j))
                printf("%d ", j);

        }

    }
    return 0;
}


