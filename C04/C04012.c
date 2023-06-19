#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int a[1005] = {0}, b [1005] = {0}, c[10005] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++)
    {
        if (c[i] == 0)
        {
            b[i] = 1;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] == a[j])
            {
                b[i]++;
                c[j] = 1;
            }
        }
        }
    }
    int kt = 1;
    for (int i = 1; i <= n; i++)
    if (c[i] == 0 && b[i] > 1)
    {
        kt = 0;
        printf("%d ", a[i]);
    }
    // if (b[i] > 1)
    // {
    //     printf("%d ", a[i]);
    //     kt = 0;
    // }   
    if (kt)
        printf("0");
}