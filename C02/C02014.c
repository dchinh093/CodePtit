#include<stdio.h>
#include<math.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int m = 2*n - 1;
    int h = 1, t = n;
    for (int i = 1; i <= n - 1; i++)
    {
        int k = n;
        for (int j = 1; j <= h; j++)
            printf("%d", k--);
        for (int j = 1; j <= m - h * 2; j++)
            printf("%d", t);
        k++;
        for (int j = 1; j <= h; j++)
            printf("%d", k++);
        t--;
        h++;
        printf("\n");
    }
    
    for (int i = n; i >= 1; i--)
        printf("%d", i);
    for (int i = 2; i <= n; i++)
        printf("%d", i);
    printf("\n");
    h = n - 1; t = 2;
    for (int i = 1; i <= n - 1; i++)
    {
        int k = n;
        for (int j = 1; j <= h; j++)
            printf("%d", k--);
        h--;
        for (int j = 1; j <= m - h * 2 - 1; j++)
            printf("%d", t);
        t++;
        k += 2;
        for (int j = 1; j <= h; j++)
            printf("%d", k++);
        printf("\n");
    }
}



