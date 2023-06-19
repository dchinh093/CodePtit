#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
    ll sum = 0;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int i = 2;
        while (i * i <= n)
        {
            if (n % i == 0)
            {
                n = n / i;
                sum += i;
                
            }
            else
                i++;
        }
        sum += n;
        
    }
    printf("%lld", sum);
}