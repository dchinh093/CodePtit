#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n)	;
	int a[105];
	for(int i = 0; i < n; i ++)
		scanf("%d", &a[i]);
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1 ; j <n; j++ )
		{
			if ((a[i] % 2 != 0 && a[j] % 2 == 0) 
				|| (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i]>a[j]) 
				|| (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i]>a[j]))
			{
				int tp = a[i];
				a[i] = a[j];
				a[j] = tp;
			}
		}
	}
	for(int i = 0 ; i < n; i++)
		printf("%d ",a[i]);
	return 0;
}
