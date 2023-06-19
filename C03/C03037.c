#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
    ll n;
    int a[10] = {0};
    a[2] = 0;a[3] = 0; a[5] = 0;a[7] = 0;
    scanf("%lld", &n);
    while (n > 0)
    {
        int k = n % 10;
        if (k == 2 || k == 3 || k == 5 || k == 7 )
            (a[k]++);
        n = n / 10;
    }
    for (int i = 2; i <= 7; i++)
        if(a[i] != 0)
            printf("%d %d\n", i, a[i]);

}