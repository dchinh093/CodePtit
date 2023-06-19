#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int a[102];
	for(int i = 1; i <= n; i ++)
		scanf("%d", &a[i]);
	for(int i = 1; i < n; i++)
	{
		int min = 101, k;
		for(int j = i; j <= n; j++)
		{
			if(min > a[j])
			{
				min =  a[j];
				k = j;
			}	
		}
		int tp = a[k];
		a[k] = a[i];
		a[i] = tp;
		for(int j = 1; j <= n; j++)
			printf("%d ", a[j]);
		printf("\n");
	}
	return 0;
}
