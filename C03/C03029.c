#include <stdio.h>
#include <math.h>

int sum(int b)
{
    int d = 0;
    while ( b > 0)
    {
        d += b % 10;
        b /= 10;
    }
    return d;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {    
        long long n;
        int kt = 1;
        scanf("%lld", &n);
        while ( n > 0)
        {
            long long d = n % 10;
            n /= 10;
            if (d % 2 == 1)
                {
                    kt = 0;
                    break;
                }
        }
        if (kt)
            printf("YES\n");
        else
            printf("NO\n");
    }


}