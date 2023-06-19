#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int n,k,a[1000],max = INT_MIN, max1 = INT_MIN;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {  
        scanf("%d", &k);
        if ( k > max)
            {
                max1 = max;
                max = k;
            }
        else
            if ( k > max1 && k < max)
                max1 = k;
    }
    printf("%d %d", max, max1);
    
}