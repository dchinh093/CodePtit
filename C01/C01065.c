#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", &s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7')
        {
            int d = 1;
            for (int j = i + 1; j < strlen(s); j++)
                if (s[i] == s[j])
                {
                    d++;
                    s[j] = '0';
                }
            
            printf("%c %d\n", s[i], d);
        }

    }
}