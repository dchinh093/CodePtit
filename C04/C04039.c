#include <stdio.h>
#include <math.h>
#define ll long long

ll min(ll a, ll b)
{
      if (a < b)
            return a;
      return b;
}

int main()
{
      ll d, c;
      while (scanf("%lld%lld", &d, &c) != -1)
      {
            ll dem = abs(c - d);
            ll m = (ll)sqrt(dem);
            if (dem > m * (m + 1))
                  printf("%lld\n", m * 2 + 1);
            if (dem == m * (m + 1))
                  printf("%lld\n", m * 2 );
            if (dem < m * (m + 1) && dem > m * m)
                  printf("%lld\n", m * 2);
            if (dem == m * m)
                  printf("%lld\n", 2 * m - 1);
      }
      return 0;
}