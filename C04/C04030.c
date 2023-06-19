#include<stdio.h>

int main ()
{
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++)
	{
		int n;
		scanf("%d", &n);
		int a[102], b[102];
		for(int j = 1; j <= n; j++)
			scanf("%d", &a[j]) ;
		for(int j = 1; j <= n; j++)
			scanf("%d", &b[j]) ;
		
		for(int k = 1; k < n; k++ )
		{
			for(int j = k ; j <= n; j++)
			{
				if(a[k] > a[j])
				{
					int tp = a[k];
					a[k] = a[j];
					a[j] = tp;
				}
			}
		}
		
		for(int k = 1; k < n; k++ )
		{
			for(int j = k ; j <= n; j++)
			{
				if(b[k] < b[j])
				{
					int tp = b[k];
					b[k] = b[j];
					b[j] = tp;
				}
			}
		}
		
		printf("Test %d:\n", i);
		for(int j = 1; j <= n; j++)
		{
			printf("%d ", a[j]);
			printf("%d ", b[j]);
		}
		printf("\n");
	} 
	return 0;
}
