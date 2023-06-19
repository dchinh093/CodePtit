#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int h = 1; h <= t; h++)
	{
		
	int n;
	scanf("%d", &n);
	int d = 0;
	
	int a[100005];
	int b[100005] ={0}, c[100005] = {0};
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
	printf("Test %d:\n", h);
	for (int i = 1; i <= d; i++)
		printf("%d xuat hien %d lan\n", c[i], b[c[i]]);
	}
}