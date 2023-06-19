#include <stdio.h>
#include <math.h>

int main()
{
    int n,k,a[1000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)    
        scanf("%d", &a[i]);
    scanf("%d", &k);
    k = k % n;
    for (int i = k + 1; i <= n; i++)
        printf("%d ", a[i]);
    for (int i = 1; i <= k; i++)
        printf("%d ", a[i]);
}