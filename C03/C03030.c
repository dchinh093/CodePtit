#include<stdio.h>
#include<math.h>

int skg(int n)
{
    while( n>0)
    {
        int tp = n % 10;
        n = n / 10;
        if((n % 10 ) > (tp % 10))
            return 0;
    }
    return 1;
}
 
    
int main ()
{
    int t; 
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a = (pow(10, n - 1)), b = (pow(10 , n));
        for(int i = a;  i < b; i ++)
            {
                if ((i % 10) < (i / a))
                    continue;
                if(skg(i))
                    printf("%d ", i);
            }
        printf("\n");
    }
         return 0;
}