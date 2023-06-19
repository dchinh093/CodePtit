#include<stdio.h>

int main ()
{
    long long  f[1000];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i < 93; i++)
        f[i] = f[i - 1] +  f[i - 2];
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        int i = 0;
        while(f[i] < n)
            i++;
        if (f[i] == n)
            printf("YES\n");
        else    
            printf("NO\n");

    }
    return 0;
}