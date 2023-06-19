#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    if (n <= m)
    {
        int d = m;
        for(int i = n; i >= 1; i--)
        {
            for (int j = d; j >= 1; j--)
                printf("%d", j);
            for (int j = 2; j <= m - d + 1; j++)
            {   
                printf("%d", j);
            }
            d--;
            printf("\n");
        }
    }
    else
    {
        for(int i = n; i >= 1; i--)
        {
            int kt = m;
            for (int j = i; j >= 1; j--)
            {
                if (kt > 0 )
                {
                    printf("%d", j);
                    kt--;
                }
                else
                    break;
            }
            for (int j = 2; j <= kt + 1; j++)
                printf("%d", j);
            printf("\n");
        }
    }
    
}