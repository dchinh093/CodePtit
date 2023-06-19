#include<stdio.h>

int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[104], c[30001] = {}; 
		for(int i = 1 ; i <= n; i++)
		{
			scanf("%d", &a[i]);
			c[a[i]]++;
		}
		int max = 0;
		for(int i = 1; i <= n; i++)
		{
			if(c[a[i]] > max)
				max = c[a[i]];
		}
		for(int i = 1; i <= n; i++)
		{
			if(max == c[a[i]])
			{
				printf("%d ", a[i]);
				c[a[i]] = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
