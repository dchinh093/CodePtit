#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int a[1000];
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 0)
                printf("%d ", a[i]);
        }
        printf("\n");
    }
}