#include <stdio.h>
#include <math.h>
#include <string.h>

struct sinhvien
{
      int stt;
      char name[10000];
      double num1;
      double num2;
      double num3;
      int check;
};

int main()
{
      struct sinhvien sv[1000], tmp;
      int d = 0;
      while (1 > 0)
      {
            int n;
            scanf("%d", &n);
            if (n == 3)
            {
                  for (int i = 1; i <= d; i++)
                        for (int j = 1; j <= d - i; j++)
                              if (sv[j].stt > sv[j + 1].stt)
                              {
                                    tmp = sv[j];
                                    sv[j] = sv[j + 1];
                                    sv[j + 1] = tmp;
                              }

                  for (int i = 1; i <= d; i++)
                        if (sv[i].check == 1)
                              printf("%d %s %.1lf %.1lf %.1lf\n", sv[i].stt, sv[i].name, sv[i].num1, sv[i].num2, sv[i].num3);
                  break;
            }
            else if (n == 1)
            {
                  int t;
                  scanf("%d", &t);
                  for (int i = 1; i <= t; i++)
                  {
                        d++;
                        sv[d].stt = d;
                        getchar();
                        gets(sv[d].name);
                        scanf("%lf%lf%lf", &sv[d].num1, &sv[d].num2, &sv[d].num3);
                        if (sv[d].num1 <= sv[d].num2 && sv[d].num2 <= sv[d].num3)
                              sv[d].check = 1;
                        else
                              sv[d].check = 0;
                  }
                  printf("%d\n", t);
            }
            else if (n == 2)
            {
                  int kt;
                  scanf("%d", &kt);
                  getchar();
                  gets(sv[kt].name);
                  scanf("%lf%lf%lf", &sv[kt].num1, &sv[kt].num2, &sv[kt].num3);
                  if (sv[kt].num1 <= sv[kt].num2 && sv[kt].num2 <= sv[kt].num3)
                        sv[kt].check = 1;
                  else
                        sv[kt].check = 0;
                  printf("%d\n", kt);
            }
      }
      // for (int i = 1; i <= d; i++)
      //       printf("%d %s %lf\n", sv[i].stt, sv[i].name, sv[i].sum);
}