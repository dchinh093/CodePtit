#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
      char s[1000];
      gets(s);
      char s1[1000];
      gets(s1);
      int n, m;
      n = strlen(s);
      m = strlen(s1);
      int k = 0;
      while(k < n)
      {
            if (s[k] == s1[0])
            {
                  int i = k, j = 0;
                  for (j; j < m; j++)
                        if (s[i + j] != s1[j])
                              break;
                  if (j == m)
                        k = k + j;
                  else
                  {
                        for (i = 0; i < j; i++)
                              printf("%c", s1[i]);
                        k = k + i;
                  }
            
            }
            else
            {
                  printf("%c", s[k]);
                  k++;
            }
      }
      return 0;
}