#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        //for (int j = 1; j <= i; j++)
            //printf("*");
        for (int j = 1; j <= i; j++)
        {
            if (i != 1 && i != n)
            {
                if (j == 1 || j == i)
                    printf("*");
                else
                    printf(".");
            }
            else
                printf("*");
        }
        printf("\n");
    }
}