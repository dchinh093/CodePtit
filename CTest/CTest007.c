#include<stdio.h>
#include<string.h>

int main ()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char c[20];
        gets(c);
        int kt = 1;
        for(int i = 0; i < strlen(c); i++)
        {
            if(c[i] != '0' && c[i] != '1' && c[i] != '2')
            {
                printf("NO\n");
                kt = 0;
                break;
            }
        }
        if(kt)
            printf("YES\n");
    }
    return 0;
}