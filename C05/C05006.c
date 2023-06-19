#include<stdio.h>

int main ()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int c[55][55];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
			scanf("%d", &c[i][j]);
	}
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= m; i++)
	{
		int tp = c[a][i];
		c[a][i] = c[b][i];
		c[b][i] = tp;
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j ++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
	return 0;
}
