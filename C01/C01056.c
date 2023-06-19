#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int h = 1; h <= t; h++)
    {
        char s[100];
        scanf("%s", &s);
        int kt = 1;
        for (int i = 0; i < strlen(s) - 1; i++)
            if (s[i] > s[i+1])
                {
                    kt = 0;
                    break;
                }
        if (kt)
            printf("YES\n");
        else
            printf("NO\n");
    }
}