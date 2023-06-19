#include <stdio.h>

int main()
{
      int t;
      scanf("%d", &t);
      while (t--)
      {
            int n, kt = 0;
            scanf("%d", &n);
            int a[100005];
            for (int i = 1; i <= n; i++)
                  scanf("%d", &a[i]);
            for (int i = 1; i <= n; i++)
            {
                  int cnt = 0;
                  for (int j = i; j <= n; j++)
                  {
                        if (a[i] == a[j])
                              cnt++;
                        if (cnt == 2)
                        {
                              printf("%d\n", a[i]);
                              kt++;
                        }
                        if (kt == 1)
                              break;
                  }
            }
            if (kt == 0)
                  printf("NO\n");
      }
      return 0;
}