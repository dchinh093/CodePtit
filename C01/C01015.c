#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0 && c != 0)
            printf("NO");
    }
    else
    {
        double delta = b*b - 4*a*c;
        if (delta < 0)
            printf("NO");
        else if (delta == 0)
            printf("%.2f", (-(double)b/(2*a)));
        else
            printf("%.2f %.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    }
}