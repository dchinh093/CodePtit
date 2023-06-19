#include <stdio.h>
#include <math.h>

int main()
{
      int n;
      scanf("%d", &n);
      int a[10006];
      for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
      int buoc = 0;
      for (int i = 1; i < n; i++)
      {
            int kt = 0;
            for (int j = 1; j < n; j++)
            {
                  if (a[j] > a[j + 1])
                  {
                        kt = 1;
                        int tp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = tp;
                  }
            }
            if (kt == 1)
            {
                  printf("Buoc %d: ", ++buoc);
                  for (int k = 1; k <= n; k++)
                        printf("%d ", a[k]);
                  printf("\n");
            }
      }
      return 0;
}
