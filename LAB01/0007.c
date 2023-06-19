#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int c, tong  = 0;
	for(int i = 0;  i< n; i++)
	{
		scanf("%d", &c);
		tong += c;
	}
	printf("%.3f", (float)tong/n);
	return 0;
}
