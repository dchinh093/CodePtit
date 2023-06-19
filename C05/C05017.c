#include <stdio.h>

int main()
{
      int t;
      scanf("%d", &t);
      while (t--)
      {
            int n, m, cnt = 0;
            scanf("%d %d", &n, &m);
            int a[101][101];
            for (int i = 1; i <= n; i++)
            {
                  for (int j = 1; j <= m; j++)
                        scanf("%d", &a[i][j]);
            }
            int h1 = 1, h2 = n, c1 = 1, c2 = m;
            while (h1 <= h2 && c1 <= c2)
            {
                  for (int i = c1; i <= c2; i++)
                  {
                        printf("%d ", a[h1][i]);
                        ++cnt;
                  }
                  ++h1;
                  for (int i = h1; i <= h2; i++)
                  {
                        printf("%d ", a[i][c2]);
                        ++cnt;
                  }
                  --c2;
                  if (cnt == n * m)
                        break;
                  if (c1 <= c2)
                  {
                        for (int i = c2; i >= c1; i--)
                        {
                              printf("%d ", a[h2][i]);
                              ++cnt;
                        }
                        --h2;
                  }
                  if (h1 <= h2)
                  {
                        for (int i = h2; i >= h1; i--)
                        {
                              printf("%d ", a[i][c1]);
                              ++cnt;
                        }
                        ++c1;
                  }
            }
            printf("\n");
      }
      return 0;
}