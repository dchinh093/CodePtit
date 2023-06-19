#include <stdio.h>
#include <math.h>
#include <string.h>

int sti(char s[100005])
{
      int d = 0;
      for (int i = 0; i < strlen(s); i++)
            d = d * 10 + (s[i] - '0');
      return d;
}


int main()
{
      int t;
      scanf("%d", &t);
      getchar();
      while (t--)
      {
            //struct dathuc dt[10000];
            int kt[100005] = {0};
            int sum[100005] = {0};
            int check = 0, exp = 0, pow = 0, max = -100005, min = 100005;

            char x[100005];
            gets(x);
            char *tok = strtok(x, " +*x^");
            while (tok != NULL)
            {
                  if (check)
                  {
                        exp = sti(tok);
                        if (exp > max)
                              max = exp;
                        if (exp < min)
                              min = exp;
                        sum[exp] += pow;
                        check = 0;
                  }
                  else
                  {
                        pow = sti(tok);
                        check = 1;
                  }
                  tok = strtok(NULL, " +*x^");
            }

            char y[100005];
            gets(y);
            char *tk = strtok(y, " +*x^");
            while (tk != NULL)
            {
                  if (check)
                  {
                        exp = sti(tk);
                        if (exp > max)
                              max = exp;
                        if (exp < min)
                              min = exp;
                        sum[exp] += pow;
                        check = 0;
                  }
                  else
                  {
                        pow = sti(tk);
                        check = 1;
                  }
                  tk = strtok(NULL, " +*x^");
            }
            
            for (int i = max; i >= min; i--)
                  if (sum[i] != 0)
                  {
                        printf("%d*x^%d", sum[i], i);
                        if (i > min)
                              printf(" + ");
                  }
            printf("\n");
      }
}