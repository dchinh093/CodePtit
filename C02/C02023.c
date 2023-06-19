#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    
    if (n <= m)
    {
        int k = m;
        int d = 1;
        for(int i = n; i >= 1; i--)
        {
            for (int j = m; j >=  m - d + 1; j--)
                printf("%c", j + 96);
            for (int j = 1; j <=  m - d; j++)
                printf("%c", k + 96);
            k--;
            printf("\n");
            d++;
        }
        
    }
    else
    {
        int k = n;
        int d = 1;
        for(int i = m; i >= 1; i--)
        {
            for (int j = n; j >=  n - d + 1; j--)
                printf("%c", j + 96);
            for (int j = 1; j <=  m - d; j++)
                printf("%c", k + 96);
            k--;
            printf("\n");
            d++;
        }
        for (int i = m + 1; i <= n; i++)
        {
            for (int j = n; j >= n - m + 1; j--)
                printf("%c", j + 96);
            printf("\n");
        }
    }
    
}