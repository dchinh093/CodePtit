#include <stdio.h>
#include <math.h>

int main()
{
    long long n,m;
    scanf("%lld%lld", &n, &m);
    if (n > m)
    {
        long long tmp = n;
        n = m;
        m = tmp;
    }
    printf("%lld",(m + n) * ((m - n + 1)) / 2);
}