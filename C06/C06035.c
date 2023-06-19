#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s[1000];
        scanf("%s", &s);
        int n = strlen(s);
        int d = 0;
        for (int i = 0; i <= (n / 2) - 1; i++)
        {
            // printf("%c %c\n", s[i], s[n - i - 1]);
            if (s[i] != s[n - i - 1])
                d++;
            if (d > 1)
                break;
        }
        if (d > 1 || (n % 2 == 0 && d == 0))
            printf("NO\n");
        else
            printf("YES\n");
    }
}