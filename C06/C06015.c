#include <stdio.h>
#include <string.h>

int main()
{
      int t;
      scanf("%d", &t);
      getchar();
      while(t--)
      {
            char s[1000];
            gets(s);
            char s1[1000][1000];
            int n = 0;
            char *tok = strtok(s, " ");
            while (tok != NULL)
            {
                  strcpy(s1[n], tok);
                  n++;
                  tok = strtok(NULL, " ");
            }
            for (int i = 1; i < n; i++)
            {
                  for (int j = 0; j < strlen(s1[i]); j++)
                  {
                        if (j == 0)
                        {
                              if ('a' <= s1[i][j] && s1[i][j] <= 'z')
                                    printf("%c", s1[i][j] - 32);
                              else
                                    printf("%c", s1[i][j]);
                        }
                        else
                        {
                              if ('A' <= s1[i][j] && s1[i][j] <= 'Z')
                                    printf("%c", s1[i][j] + 32);
                              else
                                    printf("%c", s1[i][j]);
                        }
                  }
                  if (i < n - 1)
                        printf(" ");
            }
            printf(", ");
            for (int i = 0; i < strlen(s1[0]); i++)
                  if ('a' <= s1[0][i] && s1[0][i] <= 'z')
                        printf("%c", s1[0][i] - 32);
                  else
                        printf("%c", s1[0][i]);
            printf("\n");
      }
}