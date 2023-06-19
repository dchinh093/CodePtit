#include<stdio.h>
#include<string.h>

int main ()
{
    char s[203];
    gets(s);
    while (strlen(s) != 1)
    {
        char c[1000];
        int nho = 0 , i , j;
        memset(c, '\0', sizeof(c));
        int n = strlen(s);
        s[-1] = '0';
        for (i = n - 1; i >= n / 2  ; i--)
        {
            int a = (int) s[i] - 48;
            int b = (int) s[i - ((n + 1) / 2)] - 48;
            if (a + b  + nho>= 10)
            {
                c[i] = (char) ((a + b + nho) % 10) + 48;
                nho = 1;
            }
            else
            {
                c[i] = (char) ((a + b + nho)) + 48;
                nho = 0;
            }
        }
        if (nho == 1)
        {
            c[i] = '1';
            j = n / 2 - 1;
        }
        else    
            j = n / 2;
        memset(s, '\0', sizeof(s));
        int d = 0;
        for ( j ; j <= n - 1 ; j++)
        {
            printf("%c", c[j]);
            s[d] = c[j];
            d++;
        } 
        printf("\n");
    }
}