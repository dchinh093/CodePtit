#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    if (n <= m)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= m; j++)
                printf("%c", j + 95 - 'a' + 'A');
            for (int j = 1; j <= i - 1; j++)
                printf("%c", m + 95 - 'a' + 'A');
            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i <= m; i++)
        {
            for (int j = i; j <= m; j++)
                printf("%c", j + 95 - 'a' + 'A');
            for (int j = 1; j <= i - 1; j++)
                printf("%c", m + 95 - 'a' + 'A');
            printf("\n");
        }

        for (int i = m + 1; i <= n; i++)
        {
            for (int j = 1; j <= m ;j++)
                printf("%c", m + 95 - 'a' + 'A');
            printf("\n");
        }
    }
    
}