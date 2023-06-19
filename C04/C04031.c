#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        int n , t = 0;;
        int a[1005];
        int vt[1005];
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        printf("Test %d:\n", k);
        int i = 1, max = 0;
        while (i <= n)
        {
            int d = 1;
            int j = i + 1;
            while (j <= n && a[j - 1] < a[j])
            {
                j++;
                d++;
            }
            //printf("%d\n", d);
            
            if (d > max)
            {
                t = 0;
                t++;
                vt[t] = i;
                max = d;
            }
            else if (d == max)
            {
                t++;
                vt[t] = i;
            }
            i = j;
        }
        printf("%d\n", max);
        for (int i = 1; i <= t; i++)
        {
            for (int j = vt[i]; j <= vt[i] + max - 1; j++)
                printf("%d ", a[j]);
            printf("\n");
        }
    }
}