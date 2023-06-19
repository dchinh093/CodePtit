#include <stdio.h>
#include <math.h>
#include <string.h>

struct lst
{
    int stt;
    char name[100];
    char date[100];
};

int main() 
{
    int n, t, d = 0, sum = 0;
    char s[100];
    struct lst a[1000];
    while(1)
    {
        scanf("%d", &n); 
        if (n == 1)
        { 
            scanf("%d", &t);
            for (int i = 1; i <= t; i++)
            {
                d++;
                int tt;
                scanf("%d", &tt);
                a[d].stt = tt;
                getchar();
                gets(a[d].name);
                gets(a[d].date); 
            }
            printf("%d\n", t);
        }
        else if (n == 2)
        {
            int tt;
            scanf("%d", &tt);
            for (int i = 1; i <= d; i++)
                if (a[i].stt == tt)
                    printf("%d %s %s\n", a[i].stt, a[i].name, a[i].date);
        }
        else if (n == 3)
        {
            for (int i = 1; i < d; i++)
                printf("%d %s %s\n", a[i].stt, a[i].name, a[i].date);
            return 0;
        }
    }
    
    //printf("begin+%s+end", a[1].name);
}