#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, k;
    int a[100005] = {0};
    scanf("%d%d%d", &n, &m, &k);
    for(int i = 1; i <= m; i++)
    {
        int h;
        scanf("%d", &h);
        for (int j = h - k; j <= h + k; j++)
            if (a[j] == 0 ) a[j] = 1;
    }
    int i = 1, j = 1, d, s = 0;
    while (i <= n)
    {
        j = i;
        while( j <= n && a[j] == 0) j++;
        d = j - i;
        if (d % (2 * k + 1) == 0)
            s += (d / (2 * k + 1));
        else    
            s = s + 1 + (d / (2 * k + 1));
        i = j + 1;
    }
    printf("%d", s);
}