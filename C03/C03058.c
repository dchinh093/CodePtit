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
	ll a[103] = {};
	a[1] = 1;
	for(ll i = 2; i <= 100; i++)
		a[i] = BCNN(a[i-1], i);
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		printf("%lld\n", a[n]);
	}
	return 0;
}
