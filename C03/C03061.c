#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long

int kt (char str[100], int l, int r)
{
    while( l <= r)
    {
        if (str[l] != str[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

int chuyen( char c)
    {
    return (int)c-48;
    }


int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100];
        scanf("%s", &s);
        //printf("%d\n", kt(s, 1, strlen(s) - 2));
        int a = chuyen(s[0]);
        int b = chuyen(s[strlen(s) - 1]);
        //printf("%d %d\n", a, b);
        if ((a == b * 2 || a * 2 == b) && kt(s, 1, strlen(s) - 2))
            printf("YES\n");
        else
            printf("NO\n");
    }
}