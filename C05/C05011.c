#include<stdio.h>

int main ()
{
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		int a[100][100], b[100][100], d[100][100];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j< m; j++)
				scanf("%d", &a[i][j]);
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				b[j][i] = a[i][j];
			}
		}
		for(int i = 0; i< n; i++)
		{
			for(int j = 0;  j< n; j++ )
			{
				d[i][j] = 0;
				for(int l = 0 ; l < m; l++)
					d[i][j] += a[i][l] * b[l][j];
			}
		}
		printf("Test %d:\n", k);
		for(int i = 0; i< n; i++)
		{
			for(int j =  0;  j< n; j++ )
				printf("%d ", d[i][j]);
			printf("\n");	
		}
	}
	return 0;
}
