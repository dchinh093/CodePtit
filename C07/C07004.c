#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long

ll ucln(ll a, ll b)
{
      ll r;
      while (b > 0)
      {
            r = a % b;
            a = b;
            b = r;
      }
      return a;
}
ll bcnn(ll a, ll b)
{ 
      return ((a * b) / ucln(a, b));
}

int main()
{
      int t;
      scanf("%d", &t);
      for (int k = 1; k <= t; k++)
      {
            ll m, n, p, q;
            scanf("%lld%lld%lld%lld", &m, &n, &p, &q);
            printf("Case #%d:\n", k);
            ll h = bcnn(n / ucln(m, n), q / ucln(p, q));
            printf("%lld/%lld %lld/%lld\n", h * m / n, h, h * p / q, h);
            ll t1 = h * m / n + h * p / q;
            printf("%lld/%lld\n", t1 / ucln(t1, h), h / ucln(t1, h));
            printf("%lld/%lld\n", (h * m / n) / ucln(h * m / n, h * p / q), (h * p / q) / ucln(h * m/ n, h * p / q));
      }
}