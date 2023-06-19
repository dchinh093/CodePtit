#include <stdio.h>
#define ll long long

void qs(ll a[100005], int l, int r)
{
      int i = l, j = r;
      ll x = a[(l + r) / 2];
      while (i <= j)
      {
            while (a[i] < x)
                  ++i;
            while (a[j] > x)
                  --j;
            if (i <= j)
            {
                  ll temp = a[i];
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
            int n, kt = 0;
            scanf("%d", &n);
            ll a[5005];
            for (int i = 1; i <= n; i++)
            {
                  ll c;
                  scanf("%lld", &c);
                  a[i] = c * c;
            }
            qs(a, 1, n);
            for (int i = n; i >= 3; i--)
            {
                  int l = 1, r = i - 1;
                  while (l < r)
                  {
                        if (a[l] + a[r] == a[i])
                        {
                              ++kt;
                              break;
                        }
                        else if (a[l] + a[r] > a[i])
                              --r;
                        else
                              ++l;
                  }
            }
            if (kt == 1)
                  printf("YES\n");
            else
                  printf("NO\n");
      }
      return 0;
}