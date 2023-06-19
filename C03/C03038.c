#include<stdio.h>

int main ()
{
    int t;
    scanf("%d", &t );
    while(t--)
    {
        int n, p, cnt = 0;
        scanf("%d %d", &n, &p);
        for(int i = p; i <= n; i++)
        {
            int k = i;
            while(k % p == 0)
            {
                ++cnt;
                k = k / p;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}