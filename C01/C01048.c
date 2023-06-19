#include <stdio.h>
#include <math.h>

int main()
{
    int n,d = 0,k = 0;
    scanf("%d", &n);
    while ( n > 0)
    {
        if ((n % 10) % 2 == 0)
            d++;
        else    
            k++;
        n = n / 10;
    }
    printf("%d %d", k, d);
}