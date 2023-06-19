#include <stdio.h>
#include <math.h>

int ucln(long long a, long long b)
{
    long long m = a * b;
    long long r;
    while (b > 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n,m,p,q;
        scanf("%lld%lld%lld%lld", &n, &m, &p, &q);
        if (ucln(n,m) == ucln(p,q))
            printf("YES\n");
        else    
            printf("NO\n");
    }
}