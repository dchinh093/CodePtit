#include <stdio.h>
#include <math.h>
#define ll long long
int main()
{
    int a, b, c, d, e, f;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    if (b > a)
    {
        int t = a;
        a = b;
        b = t;
    }
    if (d > c)
    {
        int t = c;
        c = d;
        d = t;
    }
    if (f > e)
    {
        int t = e;
        e = f;
        f = t;
    }
    int n = a * b + c * d + e * f;
    int t = sqrt(n);
    int max = fmax(a, fmax(c, e));
    if (t * t == n && max == t)
    {
        if (a == c && c == e && e)
            printf("YES");
        else if (a == max)
        {
            if ((c == a - b || d == a - b) && (e == a - b || f == a - b))
                printf("YES");
            else
                printf("NO");
        }
        else if (c == max)
        {
            if ((a == c - d || b == c - d) && (e == c - d || f == c - d))
                printf("YES");
            else
                printf("NO");
        }
        else
        {
            if ((a == e - f || b == e - f) && (c == e - f || d == e - f))
                printf("YES");
            else
                printf("NO");
        }
    }
    else
        printf("NO");
    return 0;
}