#include <stdio.h>
#include <math.h>

int sonto (int a)
{
    if (a < 2) 
        return 1; 
    for ( int i = 2; i <= sqrt(a); i++)
        {
            if ( a % i == 0)
            return 1;
        }
    return 0;
}

int main()
{
    int n,d = 0;
    int a[103];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int k;
        scanf("%d", &k);
        if (sonto(k) == 0)
            {
                d++;
                a[d] = k;
            }
    }
    printf("%d ", d);
    for (int i = 1; i <= d; i++)
        printf("%d ", a[i]);
}