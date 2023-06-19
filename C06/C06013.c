#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
      int t;
      scanf("%d", &t);
      getchar();
      while (t--)
      {
            char s[1000];
            gets(s);
            int c[10] = {0};
            int kt = 1, x = 362880, ck0 = 0, ck1 = 0;
            for (int i = 0; i < strlen(s); i++)
            {
                  if (s[i] < '0' || s[i] > '9' || s[0] == '0')
                  {
                        kt = 0;
                        break;
                  }
                  else
                  {
                        c[s[i] - '0'] = 1;
                  }
            }
            if (kt)
            {
                  int i;
                  for (i = 1; i <= 9; i++)
                        if (c[i] == 0)
                              break;
                  if (i == 10)
                        printf("YES\n");
                  else
                        printf("NO\n");
            }
            else
                  printf("INVALID\n");
      }
}