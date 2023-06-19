#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int  d = 0;
        while ( n > 0)
        {
            d += n % 10;
            n = n / 10;
        }
        if (d % 10 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}