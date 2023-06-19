#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
      char s[100];
      gets(s);
      char s1[100][100];
      char *tok = strtok(s, " ");
      int n = 0;
      while (tok != NULL)
      {
            strcpy(s1[n], tok);
            n++;
            tok = strtok(NULL, " ");
      }
      for (int i = 0; i < n; i++)
      {
            int kt = 1;
            for (int j = 0; j < i; j++)
            {
                  if (strcmp(s1[i], s1[j]) == 0)
                  {
                        kt = 0;
                        break;
                  }
            }
            if (kt)
                  printf("%s ", s1[i]);
      }
}