#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char s[500];
        gets(s);
        int n = strlen(s) - 1;
        int i = 0, d = 0;
        while (i <= n)
        {
            int j = i;
            while ( j <= n && s[j] != ' ')
                j++;
            if (i != j)
                d++;
            i = j + 1;
        }
        printf("%d\n", d);
    }
}