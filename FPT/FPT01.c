#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		int count = 0; 
		for(int j = 1; j < i; j++)
			printf("0 " );
		for(int j = i; j <= n; j++)
			printf("%d ", count++);
		printf("\n");
	}
	return 0;
}
