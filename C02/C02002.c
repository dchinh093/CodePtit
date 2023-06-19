#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d", &a);
    int k = a;
    for (int i = 1; i <= a; i++)
    {
        k--;
        for (int h = 1; h <= k; h++)
            printf("~");
        for (int j = 1; j <= a; j++)
            printf("*");
        printf("\n");
        
    }
    return 0;
}
    