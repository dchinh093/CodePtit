#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++)
    {
        int n;
        scanf("%d", &n);
        for (int i = 2; i <= n; i++)
        {
            while (n % i ==0)
            {
                printf("%d ",i);
                n = n / i;
            }
        }
        printf("\n");
    }
}