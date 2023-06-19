#include<stdio.h>
#include<limits.h>

int main ()      
{
    int t ;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[1000];
        int d = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            int kt = 1;
            for (int j = 1; j <= i; j++)
                if(a[i] < a[j])
                {
                    kt = 0;
                    break;
                }
            if (kt)
                d++;
        }
        printf("%d\n", d);

    }
}