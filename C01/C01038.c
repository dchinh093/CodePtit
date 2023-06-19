#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    
        char s[100];
        scanf("%s", &s);
        char c = s[0];
        s[0] = s[strlen(s) - 1];
        s[strlen(s) - 1] = c;
        int kt = 1;
        for (int i = 0; i <= strlen(s); i++)
        {
            if (s[i] == '0' && kt == 1)
                continue;
            else    
                kt = 0;
            if (kt == 0)
                printf("%c", s[i]);
        }
        ///printf("%s", s);
    
}