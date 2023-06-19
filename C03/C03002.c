#include <stdio.h>
 
int main()
{
    int n;
    int a[1000005] ={};
    scanf ("%d", &n); 
    for (int i = 2; i <= n; i++)
    {

        if (a[i] == 0) 
        {
            for ( int j = 2; j * i <= n; j++)
                {
                    a[i*j] = 1;
                }
        }
    }
  for (int i = 2; i <= n; i++)
    if (a[i] == 0)
        printf("%d\n", i);
}