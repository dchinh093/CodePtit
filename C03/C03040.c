#include <stdio.h>
#include <math.h>

int sum(int b)
{
    int d = 0;
    while ( b > 0)
    {
        d += b % 10;
        b /= 10;
    }
    return d;
}

int main()
{
        int n;
        int t = 0;
        scanf("%d", &n);
        int m = n;
        for( int i = 2; i <= n; i++)
        {
            while (m % i == 0)
            {
                m = m/i;
                //printf("%d ", i);
                t = t + sum(i);
            }
            if (m == 1)
                break;        
        }
        if (sum(n) == t)        
            printf("YES");
        else    
            printf("NO");
}