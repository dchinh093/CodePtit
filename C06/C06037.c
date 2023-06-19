#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
      char s[100];
      scanf("%s", &s);
      int d = 0;
      for (int i = 0; i < strlen(s); i++)
      {
            int j;
            for (j = 0; j < strlen(s); j++)
            {
                  if (i == j)
                        continue;
                  if (s[i] == s[j])
                        break;
            }
            if (j == i + 1)
                  continue;
            int f[130] = {0};
            for (int k = i + 1; k < j; k++)
                  f[s[k]] += 1;

            for (j = 'A'; j <= 'Z'; j++)
            {
                  if (f[j] == 1)
                        d += 1;
            }
      }
      printf("%d", d / 2);
}