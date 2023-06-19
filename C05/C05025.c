#include <stdio.h>

int main()
{
      int t;
      scanf("%d", &t);
      for (int it = 1; it <= t; it++)
      {
            int n, m;
            scanf("%d %d", &n, &m);
            int a[104][104];
            for (int i = 1; i <= n; i++)
            {
                  for (int j = 1; j <= m; j++)
                        scanf("%d", &a[i][j]);
            }

            for (int i = 1; i <= n; i++)
            {
                  for (int j = 1; j <= m; j++)
                  {
                        for (int k = i; k <= n; k++)
                        {
                              for (int l = j; l <= m; l++)
                              {
                                    if (a[i][j] > a[k][l])
                                    {
                                          int tp = a[i][j];
                                          a[i][j] = a[k][l];
                                          a[k][l] = tp;
                                    }
                              }
                        }
                  }
            }
            printf("Test %d:\n", it);
            for (int i = 1; i <= n; i++)
            {
                  for (int j = 1; j <= m; j++)
                        printf("%d ", a[i][j]);
                  printf("\n");
            }
      }
      return 0;
}