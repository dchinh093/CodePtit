#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
    int n;
    scanf ("%d", &n);
    int a = 0, b = 1,c = 0;
    while (c < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d", c == n);
    return 0;
}