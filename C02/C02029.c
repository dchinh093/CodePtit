
#include<stdio.h>


int main ()
{
    int n; 
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int l = n ;
        if(i % 2 == 1)
        {
            int k = i - n;
           for(int j = 1; j <= 2*i - 1; j+=2 )
           {
                k = k + l;
              printf("%c ", k + 96 - 'a' + 'A' );
              l--;
           }
        }
        else
         {
            int k = i - n;
            for(int j = 2; j <= 2*i ;j+=2 )
            {
                k = k + l;
              printf("%c ", k + 96 - 'a' + 'A');
              l--;
            }
         }

        printf("\n");
    }
    return 0;
}