#include<stdio.h>
#include<string.h>

int main ()
{
    int t; 
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char c[104];
        gets(c);
        int i = 0;
        while (i < strlen(c))
        {
            int j = i;
            int count = 0;
            while(c[i] == c[j] && j <= strlen(c) - 1)
            {
                j++;
                count++;
            }
            printf("%c%d", c[i], count);
            i = j;
            
        }
        printf("\n");
    }
}