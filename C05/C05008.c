#include<stdio.h> 

int main ()
{
	int t;
	scanf("%d", &t);
	for(int k = 1;  k<= t; k++)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		int a[12][12];
		for(int i = 0; i <n; i++)
		{
			for(int j = 0; j < m ;j++)
				scanf("%d", &a[i][j]);
		}
		int max = -1e9 - 1, hang, cot;
		for(int i = 0; i < n; i++)
		{
			int sum = 0;
			for(int j = 0;  j< m; j++)
				sum += a[i][j];
			if(sum > max)
			{
				max = sum;
				hang = i;
			}
		}
		max = -1e9 - 1;
		for(int i = 0; i < m; i++)
		{
			int sum = 0;
			for(int j = 0; j < n; j++){
				if(j == hang )
					continue;
				sum += a[j][i];
			}
			if(sum > max)
			{
				max = sum;
				cot = i;
			}
		}
		printf("Test %d:\n", k);
		for(int i = 0; i < n; i++)
		{
			if(i == hang)
				continue;
			for(int j =0; j < m; j++)
			{
				if(j == cot)
					continue;
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
