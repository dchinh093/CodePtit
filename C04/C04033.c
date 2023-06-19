#include <stdio.h>
#include <math.h>


int main()
{
    int n,d = 0;
    int a[100005] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int k;
        scanf("%d", &k);
        if (a[k] == 0)
        {
            printf("%d ", k);
            a[k] = 1;
        }
    }
}