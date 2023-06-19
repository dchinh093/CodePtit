#include <stdio.h>
#include <math.h>
#define ll long long


int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (j % 2 == 0)
        {
            j = j / 2;
            d++;
        }
    }
    if (d >= k)
        printf("Yes\n");
    else    
        printf("No\n");

}