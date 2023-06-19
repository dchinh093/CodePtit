#include <stdio.h>
#include <math.h>

int check (int a, int b, int c)
{
      if (a + b > c && a + c > b && b + c > a)
            return 1;
      return 0;
}

struct toado
{
      double A[2];
      double B[2];
      double C[2];
} td;

int main()
{
      int t;
      scanf("%d", &t);
      while(t--)
      {
            scanf("%lf%lf%lf%lf%lf%lf", &td.A[0], &td.A[1], &td.B[0], &td.B[1], &td.C[0], &td.C[1]);
            double AB = sqrt((td.A[0] - td.B[0]) * (td.A[0] - td.B[0]) + (td.A[1] - td.B[1]) * (td.A[1] - td.B[1]));
            double BC = sqrt((td.B[0] - td.C[0]) * (td.B[0] - td.C[0]) + (td.B[1] - td.C[1]) * (td.B[1] - td.C[1]));
            double CA = sqrt((td.A[0] - td.C[0]) * (td.A[0] - td.C[0]) + (td.A[1] - td.C[1]) * (td.A[1] - td.C[1]));
            if (check(AB,BC,CA))
                  printf("%.3lf\n", AB + BC + CA);
            else
                  printf("INVALID\n");
      }
}