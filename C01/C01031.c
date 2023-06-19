#include <stdio.h>
#include <math.h>

int main()
{
        int n;
        scanf("%d", &n);
        int m = n;
        for( int i = 2; i <= n; i++)
        {
            int d = 0;
            while (m % i == 0)
            {
                m = m/i;
                d++;
                if (m != 1)
                    printf("%dx", i);
                else
                    printf("%d", i);
            }
        }
}