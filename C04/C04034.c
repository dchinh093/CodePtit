#include <stdio.h>
#include <math.h>


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    int n;
    int a[100005] = {0};
    int b[100005];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int d = 0;
    int max = a[n];
    int i = n;
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] > max)
        {
            d++;
            b[d] = a[i];
            max = a[i];
        }
    }
    for (int i = d; i >= 1; i--)
        printf("%d ", b[i]);
    printf("%d\n", a[n]);
    }
}