#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n,d = 0;
        scanf("%d", &n);
        while ( n > 0)
        {
            d += n % 10;
            n = n / 10;
        }
        printf("%d\n", d);
    }
}