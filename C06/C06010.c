#include <math.h>
#include <stdio.h>
#include <string.h>

int kt(char c)
{
    if (c == '0' || c == '2' || c == '4' || c == '6' || c == '8')
        return 1;
    else    
        return 0;
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
        int d = 0;
        int n = strlen(s) - 1;
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] != s[n - i] || kt(s[i]) == 0 || kt(s[n - i]) == 0)
            {
                d = 1;
                break;
            }
        }
        if (d == 1)
            printf("NO\n");
        else    
            printf("YES\n");
    }
}