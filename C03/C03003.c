#include <stdio.h>
#include <math.h>

int sonto (long long a)
{
    if (a < 2) 
        return 1; 
    for ( int i = 2; i <= sqrt(a); i++)
        {
            if ( a % i == 0)
            return 1;
        }
    return 0;
}

int main()
{
    int n;long long i = 2;
    scanf("%d", &n);
    while (n > 0)
    {
        
        if(sonto (i) == 0)
            {
                printf("%lld\n", i);
                n--;
            }
        i++;
    }
}