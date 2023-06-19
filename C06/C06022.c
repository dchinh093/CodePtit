#include <stdio.h>
#include <math.h>
#include <string.h>

char lwr(char c)
{
      if ('A' <= c && c <= 'Z')
            return (c + 32);
      else
            return c;
}

int check(char a[1000], char b[1000])
{
      if (strlen(a) != strlen(b))
            return 0;
      for (int i = 0; i < strlen(a); i++)
            if (lwr(a[i]) != lwr(b[i]))
                  return 0;
      return 1;
}

int main()
{
      int t;
      scanf("%d", &t);
      getchar();
      for (int l = 1; l <= t; l++)
      {

            char s[1000];
            gets(s);
            char m[1000];
            gets(m);
            printf("Test %d: ", l);
            char *tok = strtok(s, " ");
            while (tok != NULL)
            {
                  if (check(tok, m) == 0)
                        printf("%s ", tok);
                  tok = strtok(NULL, " ");
            }
            printf("\n");
      }
}