#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d", &n);
    int k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j <= k + n - i; j++)
            printf("%c", j + 95 - 'a' + 'A');
        printf("\n");
        k--;

    }
}