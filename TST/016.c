#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a[10] = {0};
    char s[1000];
    scanf("%s", &s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(')
            a[1]++;
        if (s[i] == ')')
            a[1]--;
        if (s[i] == '{')
            a[2]++;
        if (s[i] == '}')
            a[2]--;
        if (s[i] == '[')
            a[3]++;
        if (s[i] == ']')
            a[3]--;
        if (s[i] == "'")
            a[4]++;
        if (s[i] == "'")
            a[4]--; 
        if (s[i] == '"')
            a[5]++;
        if (s[i] == '"')
            a[5]--; 
        
    }
    for (int i = 1; i <= 5; i++)
    if(a[i] != 0)
    {
        printf("0");
        return 0;
    }
    printf("1");
    return 0;

}