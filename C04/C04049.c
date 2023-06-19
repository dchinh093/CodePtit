#include <stdio.h>
#define ll long long

ll UCLN(ll a, ll b)
{
      if (a % b != 0)
            return UCLN(b, a % b);
      else
            return b;
}

ll BCNN(ll a, ll b)
{
      return (a * b) / UCLN(a, b);
}

int main()
{
      int t;
      scanf("%d", &t);
      while (t--)
      {
            int n;
            scanf("%d", &n);
            int a[1004];
            for (int i = 1; i <= n; i++)
                  scanf("%d", &a[i]);
            printf("%d ", a[1]);
            for (int i = 1; i < n; i++)
                  printf("%d ", BCNN(a[i], a[i + 1]));
            printf("%d\n", a[n]);
      }
      return 0;
}