#include <stdio.h>
#include <math.h>
#include <string.h>

int calculator(int a, int b)
{
      int t = 0, s = 0;
      while(b >= a)
      {
            s += b / a;
            t = 2 * (b / a) + b % a;
            b = t;
      }
      return s;
}

struct danhsach
{
      char name[1000];
      int need;
      int have;
      int sl;
} ds[1000];

int main()
{
      int t, n = 0;
      scanf("%d", &t);
      int sum = 0, max = 0, vt;
      getchar();
      while (t--)
      {
            gets(ds[n].name);
            scanf("%d%d", &ds[n].need, &ds[n].have);
            getchar();
            ds[n].sl = calculator(ds[n].need, ds[n].have);
            sum += ds[n].sl;
            if (ds[n].sl > max)
            {
                  max = ds[n].sl;
                  vt = n;
            }
            n++;
      }
      printf("%d\n", sum);
      printf("%s\n", ds[vt].name);
}
