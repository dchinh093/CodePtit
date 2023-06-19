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
    int n,m;
    int k[10003] = {};
    k[0] = 1; k[1] = 1;
    int a = 0,  b = 1, c = 0;
    while (c <= 1003)
    {   
        c = a + b;
        a = b;
        b = c;
        //printf("%d ", c);
        k[c] = 1;
    }
    scanf("%d%d", &n, &m);
    if (n >= m)
    {
        int tmp = n;
        n = m;
        m = tmp;
    }
    for (int i = n; i <= m; i++)
    {
        if (sonto(i) == 0 && k[sum(i)] == 1)
            printf("%d ", i);
    }


}