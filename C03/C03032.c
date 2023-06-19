#include <stdio.h>
#include <math.h>

int sonto (int a)
{
    if (a < 2) 
        return 0; 
    for ( int i = 2; i <= sqrt(a); i++)
        {
            if ( a % i == 0)
            return 0;
        }
    return 1;
}

int kt(int a)
{
    if (sonto (a))
    {
        while (a > 0)
        {
            if ( sonto(a % 10))
                a = a / 10;
            else    
                return 0;
        }
    }
    else    
        return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,m;
        scanf("%d%d", &n, &m);
        int d = 0;
        for (int i = n; i <= m; i++)
            if(kt(i))
            {
                printf("%d\n",i);
                d++;
            }
        printf("%d\n", d);
    }
}