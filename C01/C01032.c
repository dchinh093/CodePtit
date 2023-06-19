#include<stdio.h>
#define ll long long
#include<math.h>

int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n, p = 1;
		scanf("%lld", &n);
		for(ll i = 2; i <= sqrt(n); i++)
		{
			if(n %  i == 0)
				p = p * i;
			while(n % i == 0)
				n = n / i;
		}
		if(n != 1)
			p = p * n;
		printf("%lld\n", p);
	}
	return 0;
}
