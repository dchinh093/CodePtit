#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int a[15];
	int i = 0;
	if(n == 0)
		printf("0");
	else
	{
		while(n != 0)
		{
			a[i] = n % 2;
			n=n/2;
			i++;
		}
	}
	for(i = i - 1; i >= 0; i--)
		printf("%d", a[i]);
}
