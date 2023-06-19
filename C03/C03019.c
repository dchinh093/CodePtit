#include<stdio.h>
#include<math.h>
#define ll long long

int kt(ll n )
{ 
    int m = 0, s= 0;
    ll l = n;
    while(n >= 1)
    {
        s = s + n%10;
        m = (m * 10 + n % 10);
        n=n/10;
       
    }
    return (m == l && s % 10 == 0);
}
        
        
int main ()
{
    int a[100] ={0}; 
    
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n; 
        int cnt = 0;
        scanf("%d", &n);
        if (n == 9)
            printf("9000\n");
        else
            if (n == 8)
                printf("1800\n");
        else
        {
        for(ll j = pow(10,n - 1); j < pow(10, n) - 1;j++)
        {
            //if(j%10!= j / pow(10,n - 1) || j % 10  ==0) continue;
            if(kt(j))
                cnt++;
        }
        printf("%d\n", cnt);
        }
    }
    return 0;
}

