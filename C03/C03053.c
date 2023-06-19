#include <stdio.h>
#include <math.h>
#define ll long long


int main()
{
    int a[10005] = {0}, b[10005];
    int d = 0;
    for (int i = 2; i <= 10005; i++)
    {
        if (a[i] == 0)
        {
            d++;
            b[d] = i;
            for (int j = 2; i * j <= 10005; j++)
                a[i * j] = 1;
        }
    }
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int l = 1, r = d;
    // printf("%d %d", b[l], b[r]);
        while (l <= r)
        {
            if (b[l] + b[r] < n)
                l++;
            else if (b[l] + b[r] > n)
                r--;
            else   
            { 
                printf("%d %d ", b[l], b[r]);
                l++;
                r--;
            }
        }
        printf("\n");
    }
}