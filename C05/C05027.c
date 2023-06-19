#include <stdio.h>
#include <math.h>
#include <limits.h>
#define ll long long

int main()
{
    int n;
    scanf("%d", &n);
    ll am = LLONG_MAX, bm = LLONG_MAX;
    for (int i = 1; i <= n; i++)
    {
        int a,b;
        scanf("%d%d", &a, &b);
        if (a < am)
            am = a;
        if (b < bm)
            bm = b;
    }
    //printf("%lld %lld\n", am, bm);
    printf("%lld", (am * bm));
    return 0;
}