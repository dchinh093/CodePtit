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
            int d =(n - i);
            for (int j = 1; j <= m - (n - i + 1) ; j++)
            {
                d++;
                printf("%c", d + 96 - 'a' + 'A');
            }
            for (int j = i; j <= n; j++)
                printf("%c", m + 96 - 'a' + 'A');
            printf("\n");
        }
        
    }
    else
    {
        for (int i = 1; i <= n - m; i++)
        {
            for (int j = 1; j <= m; j++)
                printf("%c", m + 96 - 'a' + 'A');
            printf("\n");
        }
        for (int i = 1; i <= m; i++)
        {
            int d =(m - i);
            //printf("%d\n", d);
            for (int j = 1; j <= m - (m - i + 1) ; j++)
            {
                d++;
                printf("%c", d + 96 - 'a' + 'A');
            }
            for (int j = i; j <= m; j++)
                printf("%c", m + 96 - 'a' + 'A');
            printf("\n");
        }
        
    }
    
}