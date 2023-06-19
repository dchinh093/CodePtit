#include <stdio.h>
#include <math.h>

int ucln(int n, int m)
{
    int r;
    while (m > 0)
    {
        r = n % m;
        n = m;
        m = r;
    }
    return n;
}

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    //printf("%d", ucln(a,b));
    for (int i = a;i <= b ; i++)
    {
        for(int j = i + 1; j <= b; j++)
            if (ucln(i,j) == 1)
                printf("(%d,%d)\n", i, j);
        

    }
}