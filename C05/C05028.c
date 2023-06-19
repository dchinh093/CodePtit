#include <stdio.h>
#include <math.h>

void swap(int f[100][100], int l ,int r)
{
      for (int i = 1; i <= l; i++)
            for (int j = 1; j <= r; j++)
            {
                  if(f[i][j] != 0)
                        f[i][j] = 0;
                  else
                        f[i][j] = 1;
            }
}

int main()
{
      int n;
      int a[100][100];
      scanf("%d", &n);
      getchar();
      for (int i = 1; i <= n; i++)
      {
            char s[100];
            gets(s);
            for (int j = 1; j <= n; j++)
                  a[i][j] = s[j - 1] - 48;
      }
      int d = 0;
      for (int i = n; i >= 1; i--)
      {
            for (int j = i; j >= 1; j--)
            {
                  if (a[i][j] != 0)
                  {
                        swap(a, i, j);
                        d++;
                  }
                  if (a[j][i] != 0)
                  {
                        swap(a, j, i);
                        d++;
                  }
                  
            }
      }
      printf("%d\n", d);

            // for (int i = 1; i <= n; i++)
            // {
            //       for (int j = 1; j <= n; j++)
            //             printf("%d ", a[i][j]);
            //       printf("\n");
            // }
}