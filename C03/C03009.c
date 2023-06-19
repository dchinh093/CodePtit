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
    int n,m;
    scanf("%d%d", &n, &m);
    if (n >= m)
    {
        int tmp = n;
        n = m;
        m = tmp;
    }
    int i = 2,s = 0;
    while(i <= 50)
    {
        if (sonto((pow(2,i) - 1)) == 0 && sonto(i) == 0)
        {
            s = (pow(2,i) - 1) * (pow(2,i - 1)); 
            if (n <= s && s <= m)
                printf("%d ", s);
        }
        i++;
    }

}