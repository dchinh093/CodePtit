#include<stdio.h>
#include<math.h>

int max(int m, int n)
{
    if (m > n)
        return m;
    else
        return n;
}
int min(int m, int n)
{
    if (m < n)
        return m;
    else    
        return n;
}

int main ()
{
    int a1, a2, a3, a4, a5, a6, a7, a8,x1,x2,y1,y2;
    scanf("%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8);
    x1 = min(min(min(a1, a3), a5), a7);
    x2 = max(max(max(a1, a3), a5), a7);
    y1 = min(min(min(a2, a4), a6), a8);
    y2 = max(max(max(a2, a4), a6), a8);
    printf("%d", max(abs(x1 - x2), abs(y1 - y2)) * max(abs(x1 - x2), abs(y1 - y2)));
    
}