#include<stdio.h>
 
int main ()
{
	int n;
	scanf("%d", &n);
	int  a[101];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int key, j;
	for(int i = 0; i < n; i++)
	{
		key = a[i];
		j = i - 1;
		printf("Buoc %d: ", i);
		while(j >= 0 && a[j] > key)
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = key;
		for(int k = 0; k <= i ; k++)
			printf("%d ", a[k]);
		printf("\n");
	}
	return 0;
} 
