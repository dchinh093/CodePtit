#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char s[100];
        scanf("%s", &s);
        if (s[0] == s[strlen(s) - 1])
            printf("YES\n");
        else
            printf("NO\n");
    }
}