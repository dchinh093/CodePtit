#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    int ts = 1;
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int m = n;
        ts++;
        printf("%d = ",n);
        for( int i = 2; i <= n; i++)
        {
            int d = 0;
            while (m % i == 0)
            {
                m = m/i;
                d++;
            }
            if (d != 0 )
                if (m == 1)
                    printf("%d^%d", i, d);  
                else
                    printf("%d^%d * ", i, d);  
        }
        printf("\n");
    }
}