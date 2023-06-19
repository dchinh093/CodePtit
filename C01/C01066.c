#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    int min = a;
    if (b < min)
        min = b;
    if (min > c)
        min = c;
    printf("%d", min);
}