#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a,b;
        scanf("%lld%lld", &a, &b);
        long long m = a * b;
        long long r;
        while (b > 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        printf("%lld %lld\n", m / a, a);
        
    }
}