#include<stdio.h>
#include<math.h>

long long kt(long long n)
{
	long long res, i;
	for(i = 2; i <= sqrt(n); i++)
	{
		while( n % i == 0)
		{
			res = i;
			n/=i;
		}
        if (n == 1)
            return i;
	}
    return n;
		
	
}
int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", kt(n));
	}
	return 0;
	
 } 
