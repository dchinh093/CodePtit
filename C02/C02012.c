#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    if (n <= m)
    {
        for(int i = 1; i <= n; i++)
        {
            for (int j = i; j >= 1; j--)
                printf("%d", j);
            int d = 1;
            for (int j = 1; j <= m - i; j++)
            {   
                d++;
                printf("%d", d);
            }
            printf("\n");
        }
    }
    else
    {
        for(int i = 1; i <= m; i++)
        {
            for (int j = i; j >= 1; j--)
                printf("%d", j);
            int d = 1;
            for (int j = 1; j <= m - i; j++)
            {   
                d++;
                printf("%d", d);
            }
            printf("\n");
        }
        for (int i = m + 1; i <= n; i++)
        {
            for (int j = i; j >= i - m + 1; j--)
            printf("%d", j);
            printf("\n");
        }
    }
    
}