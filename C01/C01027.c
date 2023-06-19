#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long a,b;
        scanf("%lld%lld", &a, &b);
        long long r;
        while (b > 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        printf("%lld\n", a);
    }
}