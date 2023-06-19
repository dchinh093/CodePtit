#include<stdio.h>
#include<math.h>
#define ll long long 

ll dt6(ll n)
{
	ll i = 0, l = n;
	while(n >= 1)
	{
		if( (n%10) == 5 )
			l = l + (ll)pow(10,i);
		++i;
		n /= 10;
	}
	return l;
}

ll dt5(ll n)
{
	ll i = 0, l = n;
	while(n >= 1)
	{
		if( (n%10) == 6 )
			l = l - (ll)pow(10,i);
		++i;
		n /= 10;
	}
	return l;
}

int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll x, y;
		scanf("%lld %lld", &x, &y);
		printf("%lld %lld\n", dt5(x) + dt5(y), dt6(x) + dt6(y));
	}
	return 0; 
}
