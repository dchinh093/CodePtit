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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b,c,d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (pow((a-c),2) == pow(b-d,2))
            printf("YES\n");
        else    
            printf("NO\n");
    }
}