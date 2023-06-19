#include <stdio.h>
#include <stdlib.h>

void qs(long long a[100005], int l, int r)
{
      int i = l, j = r;
      long long x = a[(l + r) / 2];
      while (i <= j)
      {
            while (a[i] < x)
                  ++i;
            while (a[j] > x)
                  --j;
            if (i <= j)
            {
                  long long temp = a[i];
                  a[i] = a[j];
                  a[j] = temp;
                  ++i;
                  --j;
            }
      }
      if (l < j)
            qs(a, l, j);
      if (i < r)
            qs(a, i, r);
}

int main()
{
      int t;
      scanf("%d", &t);
      while (t--)
      {
            int n, cnt = 0;
            scanf("%d", &n);
            long long a[100004];
            for (int i = 1; i <= n; i++)
                  scanf("%lld", &a[i]);
            qs(a, 1, n);
            int i = 1;
            long long min = 2 * 10e9 + 1;
            while (i < n)
            {
                  a[i] = abs(a[i + 1] - a[i]);
                  if (a[i] < min)
                        min = a[i];
                  ++i;
            }
            for (int i = 1; i < n; i++)
            {
                  if (a[i] == min)
                        cnt++;
            }
            printf("%lld %d\n", min, cnt);
      }
      return 0;
}