#include <stdio.h>
#include <math.h>

int sonto (int a)
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
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        if (sonto(n))
            printf("NO\n");
        else
            printf("YES\n");
    }
}