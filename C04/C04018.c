#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[1000];
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        int i = 1,d = 0;
        while (i <= n)
        {
            int j = i + 1;
            while (j <= n && a[i] == a[j])  j++;
            //printf("%d %d\n", i, j);
            d = d + j - i - 1;
            i = j;
        }
        printf("%d\n", d);
    }
}