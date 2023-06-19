#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define max(i, j) ((i > j) ? i : j)

int main()
{
	char s[200];
	gets(s);

	int len = strlen(s);

	int res = 0;

	int f[200] = {0};

	for (int i = 0; i < len; i++)
	{
		int maxVal = 1;
		f[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (s[i] > s[j] && f[j] + 1 > maxVal)
				maxVal = f[j] + 1;
		}

		f[i] = maxVal;
		res = max(res, maxVal);
	}

	printf("%d", 26 - res);

	printf("\n");

	return 0;
}