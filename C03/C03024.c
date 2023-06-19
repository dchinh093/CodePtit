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
    int n,m;
    
    scanf("%d%d", &n, &m);
    if (sum (n) <= sum(m))
        printf("%d %d", n, m);
    else
        printf("%d %d", m, n);


}