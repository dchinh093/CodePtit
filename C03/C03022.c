#include<stdio.h>
#include<math.h>
#define ll long long

int kt(int n )
{ 
    int s= 0, k = 1;
        for(int i = 2; i <= sqrt(n); i++)
            if( n % i == 0)
                return 0;
    while(n >= 1)
    {
        s = s + n%10;
        n=n/10;
    }
    return (s % 5 == 0);
}
        
        
int main ()
{
    int n,cnt = 0; 
    scanf("%d", &n);
    for(int j = 2; j <= n;j++)
    {
        if(kt(j))
        {
            ++cnt;
            printf("%d ", j);
        }
    }
    printf("\n");
    printf("%d", cnt);
    return 0;
}


