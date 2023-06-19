#include <stdio.h>
#include <math.h>

int main()
{
    int n,d = 1;
    scanf("%d", &n);
    while ( n > 0)
    {
        d *= n % 10;
        n = n / 10;
    }
    printf("%d", d);
}