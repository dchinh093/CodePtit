#include <math.h>
#include <stdio.h>
#include <string.h>

int ktr(char c)
{
    return (int) c - 48;
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char s[505];
        gets(s);
        //printf("%s\n", s);
        int d = 0 ,sum = 0;
        int n = strlen(s) - 1;
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] != s[n - i] )
            {
                d = 1;
                break;
            }
            sum = sum + ktr(s[i]) + ktr(s[n - i]);
            
        }
        if (d == 0 && sum % 10 == 0 && s[0] == '8' && s[n] == '8')
            printf("YES\n");
        else    
            printf("NO\n");
    }
}