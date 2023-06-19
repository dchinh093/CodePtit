#include <stdio.h>
#include <math.h>
#define ll long long

int main()
{
      int t;
      scanf("%d", &t);
      while (t--)
      {
            int n, m;
            ll d = 0;
            scanf("%d%d", &n, &m);
            getchar();
            int a[1007][1007] = {0};
            for (int i = 0; i < n; i++)
            {
                  char s[1007];
                  gets(s);
                  for (int j = 0; j < m; j++)
                  {
                        a[i][j] = s[j] - 48;
                        if (a[i][j] == 1)
                        {
                              a[n][j]++;
                              a[i][m]++;
                        }
                        if (a[i][j] == 2)
                        {
                              a[n + 1][j]++;
                              a[i][m + 1]++;
                        }
                  }
            }
            for (int i = 0; i < n ; i++)
            {
                  for (int j = 0; j < m; j++)
                  {
                        if (a[i][j] == 0)
                              continue;
                        if (a[i][j] == 1)
                              d += (ll) a[n + 1][j] * (ll) a[i][m + 1];
                        if (a[i][j] == 2)
                              d += (ll) a[n][j] * (ll) a[i][m];
                        //printf("%d ", a[i][j]);
                  }
                  //printf("\n");
            }
            printf("%lld\n", d);  
      }
}