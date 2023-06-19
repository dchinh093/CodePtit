#include <math.h>
#include <stdio.h>
struct lst
{
      int stt;
      char name[100];
      char date[100];
};

struct lst a[1000];
int d = 0;

void nhap(int n)
{
      while(n--)
      {
            int tt;
            scanf("%d", &tt);
            a[tt].stt = tt;
            getchar();
            gets(a[tt].name);
            gets(a[tt].date);
      }
}

int main()
{
      int n;
      scanf("%d", &n);
      nhap(n);
      
}
