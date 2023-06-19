#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int d = 1;
    int a[20] = {0};
    int b[20];
    a[1]= 1; int  k;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= d; j++)
        {
            k = a[j] + a[j - 1];
            printf("%d ", k);
            b[j] = k;
        }
        for (int j = 1; j <= d; j++)
            a[j] = b[j];
        printf("\n");
        d++;
    }

}