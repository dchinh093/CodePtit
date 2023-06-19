#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
    int f[100003] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        f[a]++;
        f[b]++;
        if (f[a] == n - 1 || f[b] == n - 1)
        {
            printf("Yes");
            return 0;
        }

    }
    printf("No");
    return 0;
}