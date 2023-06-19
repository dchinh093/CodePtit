#include<stdio.h>

int main ()
{
	int t; 
	scanf("%d", &t);
	while(t--)
	{
		int n, m, k;
		scanf("%d%d%d", &n, &m, &k);
		int a[103][103]; 
		for(int i = 1; i <= n; i ++)
		{
			for(int j = 1; j <= m; j++)
				scanf("%d", &a[i][j]);
		}
		for(int i = 1; i <= n; i++ )
		{
			for(int j = i + 1 ; j <= n; j ++)
			{
				if(a[i][k] > a[j][k])
				{ 
					int tp = a[i][k];
					a[i][k] = a[j][k];
					a[j][k] = tp;
				}
			}
		} 
		for(int i = 1 ; i <= n; i++)
		{
			for(int j = 1 ; j <= m; j++)
				printf("%d ", a[i][j]);
			printf("\n");
		} 
	}
	return 0;
 }


