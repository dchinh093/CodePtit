#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int k = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 1)
		{
			for(int j = 1;  j <= i ; j++)
				printf("%d ", k=k+1);
			k = k + i + 1;
		}
		if(i % 2== 0)
		{
			int l = k;
			for(int j = 1;  j <= i; j++)
				printf("%d ", l--);
		}
		printf("\n");
	}
	return 0;
}
