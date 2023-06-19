#include<stdio.h>
#include<math.h>

int nt(int n)
{
    int k = 0;
    if(n > 1)
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
                return 0;
         }
     return 1; 
     }
     else
         return 0;
}

int main ()
{
     int t;
     scanf("%d", &t);
     while(t--)
     {
         int n, c;
         scanf("%d", &n);
         for(int i = 0; i< n; i++)
         {
             scanf("%d", &c);
             if(nt(c))
                 printf("%d ", c);
         }
         printf("\n");
     }
     return 0;
}