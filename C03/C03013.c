#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
    int n;
    scanf ("%d", &n);
    int a = 0, b = 1,c = 0;
    while (n--)
    {
        printf("%d ", a);
        c = a;
        a = a + b;
        b = c; 
    }
    return 0;
}