#include <stdio.h>
#include <string.h>

int main()
{
      char s[1000];
      gets(s);
      int n = 0;
      char s1[100][1000];
      char *tok = strtok(s, " ");
      while (tok != NULL)
      {
            strcpy(s1[n], tok);
            n++;
            tok = strtok(NULL," ");
      }
      for (int i = 0; i < n; i++)
      {
            if ( i < n - 1)
            {
                  if ( 'A' <= s1[i][0] && s1[i][0] <= 'Z')
                        printf("%c", s1[i][0] + 32);
                  else
                        printf("%c", s1[i][0]);
            }
            else
            {
                  for (int j = 0; j < strlen(s1[i]); j++)
                        if ('A' <= s1[i][j] && s1[i][j] <= 'Z')
                              printf("%c", s1[i][j] + 32);
                        else
                              printf("%c", s1[i][j]);
            }
      }
      printf("@ptit.edu.vn");
      return 0;
}