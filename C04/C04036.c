#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[22];
        a[1] = 1; a[2] = 2; a[3] = 5; 
        a[4] = 10; a[5] = 20; a[6] = 50; 
        a[7] = 100; a[8] = 200; a[9] = 500; 
        a[10] = 1000;
        int i = 10, cnt = 0;
        while(n > 1)
        {
            while(n >= a[i])
            {
                cnt = cnt + n/a[i] ;
                n = n % a[i];
            }
            --i;
        }
        if(n == 1)
            cnt = cnt + 1;
        printf("%d\n", cnt );
    }
    return 0;
}