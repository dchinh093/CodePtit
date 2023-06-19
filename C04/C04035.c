#include <stdio.h>
#include <math.h>
#include <limits.h>
#define ll long long

struct time
{
      ll up;
      ll down;
} time[250000];

int main()
{
      ll n;
      scanf("%lld", &n);
      ll sum_up = 0, sum_down = 0;
      ll minu = LLONG_MAX, mind = LLONG_MAX;
      for (ll i = 0; i < n; i++)
      {
            scanf("%lld%lld", &time[i].up, &time[i].down);
            sum_up += time[i].up;
            sum_down += time[i].down;
            if (minu > time[i].up)
                  minu = time[i].up;
            if (mind > time[i].down)
                  mind = time[i].down;
      }
      if (sum_up > sum_down)
            printf("%lld",sum_up + mind);
      if (sum_up <= sum_down)
            printf("%lld",sum_down + minu);
      
}