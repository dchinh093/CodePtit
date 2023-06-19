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

int kt(int a)
{
    int sum = 0;
    int cs = 10;
    while (a >0 )
    {
        sum = sum * 10 + a % 10;
        a = a / 10;
    }
    return sum;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,m;
        scanf("%d%d", &n, &m);
        int d = 10;
        for (int i = n; i <= m; i++)
        {
            if (sonto(i) == 0 && kt(i) == i)
            {
                d--;
                printf("%d ", i);
                if(d == 0)
                {
                    printf("\n");
                    d = 10;
                }
            }
        }
    printf("\n");
    }

}