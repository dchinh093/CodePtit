#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
        char s[100];
        scanf("%s", &s);
        printf ("%c %c",s[0], s[strlen(s) - 1]);
}