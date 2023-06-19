#include <stdio.h>
#include <math.h>
#include <strings.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char s[1000];
        scanf("%s", &s);
        int n = strlen(s);
        for(int i = 0; i <= (n / 2) - 1; i++)
        {
            printf("%c %c\n", s[i], s[n - i - 1]);
        }
    }
}