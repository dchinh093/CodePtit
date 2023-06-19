#include<stdio.h>
#define ll long long

ll UCLN(ll a, ll b)
{
	if(a % b != 0)
		return UCLN(b,a%b);
	else
		return b;
} 
 
ll BCNN(ll a, ll b)
{
	return (a*b)/UCLN(a,b);
}

int main ()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        ll n = 1; 
        for(ll i = a; i <= b; i++)
		    n = BCNN(n, i);
	    printf("%lld\n", n);
	}
	return 0;
}
