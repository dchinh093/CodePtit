#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int a[55][55];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	}
	
	for(int i = 1; i <=n ; i++)
	{
		int k = n - i + 1;
		int tp = a[i][i];
		a[i][i] = a[i][k];
		a[i][k] = tp;
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
