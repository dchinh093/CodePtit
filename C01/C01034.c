#include <math.h>
#include <stdio.h>

int main()
{
    int n,m,a,b;
    scanf("%d%d", &n, &m);
    a = (int) sqrt(n);
    b = (int) sqrt(m);
    if (a*a < n)
        a++;
    if (b*b > m)
        b--;
    if(b - a < 0)
        printf("0\n");
    else    
    {
        printf("%d\n", b-a+1);
        for (int i= a; i <= b; i++)
            printf("%d\n",i*i);
    }
    return 0;
}