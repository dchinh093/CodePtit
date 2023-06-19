#include <stdio.h>
#include <string.h>
#include <math.h>

struct danhsach
{
      char name[1000];
      char date[1000];
      double first;
      double second;
      double third;
      double sum;
      int stt;
};

int main()
{
      struct danhsach ds[1000], tmp;
      int t, n = 0;
      double max = 0;
      scanf("%d", &t);
      getchar();
      while(t--)
      {
            gets(ds[n].name);
            gets(ds[n].date);
            scanf("%lf%lf%lf", &ds[n].first, &ds[n].second, &ds[n].third);
            ds[n].stt = n + 1;
            ds[n].sum = ds[n].first + ds[n].second + ds[n].third;
            if (ds[n].sum > max)
                  max = ds[n].sum;
            getchar();
            n++;
      }
      for (int i = 0; i < n; i++)
            if (ds[i].sum == max)
            {
                  printf("%d ", ds[i].stt);
                  printf("%s %s ", ds[i].name, ds[i].date);
                  printf("%.1lf\n", max);
            }
}