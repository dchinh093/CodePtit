#include <stdio.h>
#include <string.h>

int main()
{
      int t;
      scanf("%d", &t);
      getchar();
      while(t--)
      {
            char x[1000];
            gets(x);
            char y[1000];
            gets(y);
            char a[1000][1000], b[1000][1000];
            int n = 0, m = 0;

            char *tok = strtok(x, " ");
            while (tok != NULL)
            {
                  strcpy(a[n++], tok);
                  tok = strtok(NULL, " ");
            }

            char *tk = strtok(y, " ");
            while (tk != NULL)
            {
                  strcpy(b[m++], tk);
                  tk = strtok(NULL, " ");
            }

            for (int i = 0; i < n - 1; i++)
                  for (int j = 0; j < n - i - 1; j++)
                        if (strcmp(a[j], a[j + 1]) > 0)
                        {
                              char tg[1000];
                              strcpy(tg, a[j]);
                              strcpy(a[j], a[j + 1]);
                              strcpy(a[j + 1], tg);
                        }

            int check[1000] = {0};
            for (int i = 0; i < n; i++)
                  for (int j = 0; j < m; j++)
                        if (strcmp(a[i], b[j]) == 0)
                              check[i] = 1;

            char kt[1000];
            kt[0] = '\0';
            for (int i = 0; i < n; i++)
                  if (check[i] == 0 && strcmp(kt, a[i]) != 0)
                  {
                        printf("%s ", a[i]);
                        strcpy(kt, a[i]);
                  }
            printf("\n");
      }
}