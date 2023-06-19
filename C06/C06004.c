#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
        char s[500];
        gets(s);
        int n = strlen(s) - 1;
        int c = 0, d = 0;
        for (int i = 0; i <= n; i++)
        {
            if ( 'a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z')
                c++;
            if ( '0' <= s[i] && s[i] <= '9')
                d++;
        }
        printf("%d %d %d", c, d, n - c - d + 1);
}
        