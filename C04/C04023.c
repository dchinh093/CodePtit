#include<stdio.h>
#include<math.h>
#include<string.h>
void qs(int a[100005], int l, int r) 
{
    int i = l, j = r,
        x = a[(l + r) / 2];
    while (i <= j)
    {
        while (a[i] < x) ++i;
        while (a[j] > x) --j;
        if (i <= j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            ++i;
            --j;
        }
    }
    if (l < j) qs(a, l, j);
    if (i < r) qs(a, i, r);
}
int main()
{
    int n, a[100005];
    scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
    qs(a, 1, n);
    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
}