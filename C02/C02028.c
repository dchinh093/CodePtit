#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
       
        for (int j = i; j <= n; j++)
        {
            printf("%c", j * 2 - 1 + 96 - 'a' + 'A');
        }
        
        printf("\n");
    }
}