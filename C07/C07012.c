#include <stdio.h>
#include <math.h>
#include <string.h>

struct danhsach
{
      char name[1000];
      char group[1000];
      double buy;
      double sell;
      double profit;
      int stt;
};

int main()
{
      struct danhsach ds[1000] ,tmp;
      int t, n = 0;
      scanf("%d", &t);
      getchar();
      while (t--)
      {
            gets(ds[n].name);
            gets(ds[n].group);
            scanf("%lf%lf", &ds[n].buy, &ds[n].sell);
            getchar();
            ds[n].profit = ds[n].sell - ds[n].buy;
            ds[n].stt = n + 1;
            n++;
      }

      for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                  if(ds[j].profit < ds[j + 1].profit)
                  {
                        tmp = ds[j];
                        ds[j] = ds[j + 1];
                        ds[j + 1] = tmp;
                  }

      for (int i = 0; i < n; i++)
      {
            printf("%d ", ds[i].stt);
            printf("%s %s ", ds[i].name, ds[i].group);
            printf("%.2lf\n", ds[i].profit);
      }
}