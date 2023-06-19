#include<stdio.h>
#include<math.h>
#define ll long long

int kt(int n )
{ 
    int l = n, m = 0;
    while(n >= 1)
    {
        if(n % 10 == 9)
            return 0;
        m = (m * 10 + n % 10);
        n=n/10;
    }
    return (m== l) ;
}

int main ()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++)
    {
        if(kt(i))
        {
            printf("%d ", i);
            ++cnt;
        }
    }
    printf("\n");
    printf("%d", cnt);
    return 0;
}