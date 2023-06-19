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
            int kt = 1, d = 0;
            for (int i = 0; i < strlen(s); i++)
            {
                  if ('0' > s[i] || s[i] > '9' || s[0] == '0')
                  {
                        kt = 0;
                        break;
                  }
                  else
                  {
                        if ((s[i] - '0') % 2 == 0)
                              d++;
                        else
                              d--;
                  }
            }
            if (kt)
            {
                  if ((d > 0 && strlen(s) % 2 == 0) || (d < 0 && strlen(s) % 2 != 0))
                        printf("YES\n");
                  else
                        printf("NO\n");
            }
            else
                  printf("INVALID\n");
      }

}