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
      while (t--)
      {
            gets(ds[n].name);
            gets(ds[n].date);
            scanf("%lf%lf%lf", &ds[n].first, &ds[n].second, &ds[n].third);
            ds[n].stt = n + 1;
            ds[n].sum = ds[n].first + ds[n].second + ds[n].third;
            getchar();
            n++;
      }

      for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                  if(ds[j].sum < ds[j + 1].sum)
                  {
                        tmp = ds[j];
                        ds[j] = ds[j + 1];
                        ds[j + 1] = tmp;
                  }
      for (int i = 0; i < n; i ++)
      {
            printf("%d ", ds[i].stt);
            printf("%s %s ", ds[i].name, ds[i].date);
            printf("%.1lf\n", ds[i].sum);
      }

}