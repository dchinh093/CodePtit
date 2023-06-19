#include<stdio.h>

int main (){
	int t;
	scanf("%d", &t);
	for(int j = 1 ; j <= t; j++)
	{
		int a, b, k;
		scanf("%d %d %d", &a, &b, &k);
		int a1[105], b1[105];
		for(int i = 0 ; i < a; i++)
			scanf("%d", &a1[i]);
		for(int i = 0; i < b; i++)
			scanf("%d", &b1[i]);
		printf("Test %d:\n", j);
		for(int i = 0 ; i < a; i++)
		{
			if(i == k)
			{
				for(int j = 0 ; j < b; j++)
				printf("%d ", b1[j]);
			}
			printf("%d ", a1[i]);
		}
		printf("\n");
	}
	return 0;
}
