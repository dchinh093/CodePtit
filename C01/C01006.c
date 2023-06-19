#include<stdio.h>

int main()
{
    float a,b;
    float s;
    scanf("%f%f", &a, &b);
    if (b != 0)
    {
    printf("%.0f ", a + b);
    printf("%.0f ", a - b);
    printf("%.0f ", a * b);
    if (b != 0)
    {
        
        printf("%0.2f ", a / b);
        printf("%d", (int)a % (int)b);
    }
    }
    else
        printf("0");
    
    return 0;

}