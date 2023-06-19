#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[1000], b[1000], c[1000] = {0}, d = 0;
    for(int i = 1; i<= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++)
    {
        
        if (c[i] == 0)
        {
            int s = 1;
            for (int j = i + 1; j <= n; j++)
            {
                if (a[i] ==  a[j])
                {
                    s++;    
                    c[j] = -1;
                }
            }
            if (s == 1 )
            {
                d++;
                b[d] = a[i];
            }
        }
    }

    printf("%d\n", d);
    for(int i = 1; i<= d; i++)
    if (c[i] == 0)
        printf("%d ", b[i]);

    
    
}