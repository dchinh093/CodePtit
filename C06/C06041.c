#include <math.h>
#include <string.h>
#include <stdio.h>



int main()
{
      char s[100008];
      gets(s);
      int i = 0;
      while (i < strlen(s))
      {
            int j = i, vt, max = 0;
            for (j; j < strlen(s); j++)
                  if (s[j] > max)
                  {
                        max = s[j];
                        vt = j;
                  }
            for (j = vt; j < strlen(s); j++)
                  if (s[j] == max)
                  {
                        printf("%c", s[j]);
                        vt = j;
                  }
            i = vt + 1;
      }
}