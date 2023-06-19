#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int d = 0;
	int a[1000005];
	int b[1000005] ={0}, c[1000005] = {0};
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++)
	{
		if(b[a[i]] == 0)
		{
			d++;
			c[d] = a[i];
			b[a[i]]++;
		}
		else
			b[a[i]]++;
	}
	for (int i = 1; i <= d; i++)
		printf("%d %d\n", c[i], b[c[i]]);
}