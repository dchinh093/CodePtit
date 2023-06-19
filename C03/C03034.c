#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int h = 1; h <= t; h++)
    {
        int n,d = 0;
        scanf("%d", &n);
        for (int i = 1; i <= sqrt(n); i ++)
        {
            if (n % i == 0 )
            {
                if (i % 2 == 0)
                    d++;
                if ((n / i) % 2 == 0)
                    d++;
            }
        }
        if ((int) sqrt(n) == sqrt(n) && n % 2 == 0)   d--;
        
        printf("%d\n", d);
    }
}