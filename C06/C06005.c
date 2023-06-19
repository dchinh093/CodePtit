#include <stdio.h>
#include <math.h>
#include <string.h>

void lower(char a[105])
{
      for (int i = 0; i < strlen(a); i++)
            if (a[i] >= 'A' && a[i] <= 'Z')
                  a[i] += 32;
}

int main()
{
      char s[105];
      gets(s);
      char s1[100][1005];
      int n = 0;
      char *tok = strtok(s, " ");
      while (tok != NULL)
      {
            strcpy(s1[n], tok);
            lower(s1[n]);
            tok = strtok(NULL, " ");
            n++;
      }
      for (int i = 0; i < n; i++)
      {
            int d = 1;
            for (int j = i + 1; j < n; j++)
            {
                  if (strcmp(s1[i], s1[j]) == 0)
                  {
                        d++;
                        strcpy(s1[j], "");
                  }
            }
            if (strcmp(s1[i], "") != 0)
                  printf("%s %d\n", s1[i], d);
      }
}