#include<stdio.h>

void swap(int *a, int *b)
{
	int tp = *a;
	*a = *b;
	*b = tp;
}

int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
} 


int main()
{
	int n, time= 0;
	scanf("%d", &n);
	int t[n+5], d[n+5];
	for(int i = 1; i <= n; i++)
		scanf("%d %d", &t[i], &d[i]);
	for(int i = 1; i <= n; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			if(t[j] < t[i])
			{
				swap(&t[j], &t[i]);
				swap(&d[j], &d[i]);
			}
		}
	}
	for(int i = 1; i <= n; i++)
		time = max(time, t[i]) + d[i];
	printf("%d", time);
	return 0;
}
