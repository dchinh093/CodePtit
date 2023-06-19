#include<stdio.h>

int main ()
{
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++)
	{
		int n;
		scanf("%d", &n);
		int a[22][22], b[22][22];
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if( j <= i)
					a[i][j] = j;
				else
					a[i][j] = 0;
			}
		}
		for(int i = 1; i <= n; i++)
		{
			for( int j = 1; j <= n; j++)
			{
				b[i][j] = 0;
				for(int l = 1; l <= n; l++)
					b[i][j] += a[i][l]*a[j][l]; 
			}
		}
		printf("Test %d:\n", k);
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
				printf("%d ", b[i][j]);
			printf("\n");
		}
		
	}
	return 0;
}
