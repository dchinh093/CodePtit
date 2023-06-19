#include<stdio.h>

int main ()
{
	long long a[100] = {};
	a[1] = 1; a[2] = 1;
	for(int i = 3; i <= 92; i++ )
		a[i] = a[i-1] + a[i-2];
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		printf("%lld\n", a[n] );
	}
	return 0;
}
