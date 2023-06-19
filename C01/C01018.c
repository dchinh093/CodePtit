#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for( int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        if ((int) sqrt(n) == sqrt(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}