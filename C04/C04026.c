#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int a[ 101];
	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for(int i = 1; i < n; i++ )
	{
		printf("Buoc %d: ", i);
		for(int j = i ; j  <=n; j++)
		{
			if(a[i] > a[j])
			{
				int tp = a[i];
				a[i] = a[j];
				a[j] = tp;
			}
		}
		for(int j = 1; j <= n; j++)
			printf("%d ", a[j]);
		printf("\n");
	}
	return 0;
}
