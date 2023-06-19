#include<stdio.h>

int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n+3];
		for(int i = 0; i < n;  i++)
			scanf("%d", &a[i]);
		int k = 1, h = 0;
		for(int i = 0; i <= (n/2); i++)
		{
			if(a[i] != a[n - k])
			{
				printf("NO\n");
				h = 1;
				break; 
			}
			k++;
		}
		if(h != 1)
			printf("YES\n");
	}
	return 0;
}