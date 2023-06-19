#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int a1[101], b1[101];
	for(int i = 0 ; i < a; i++)
		scanf("%d", &a1[i]);
	for(int i = 0; i < b; i++)
		scanf("%d", &b1[i]);
	int k;
	scanf("%d", &k);
	for(int i = 0;  i< k; i ++)
		printf("%d ", a1[i]);
	for(int i = 0 ; i < b; i++)
		printf("%d ", b1[i]);
	for(int i = k; i < a; i ++)
		printf("%d ", a1[i]);
	return 0;
}

 
