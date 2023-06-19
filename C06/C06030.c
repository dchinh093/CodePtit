#include <stdio.h>
#include <math.h>
#include <string.h>

int check(char a[1000])
{
      for (int i = 0; i < strlen(a); i++)
            if (a[i] != a[strlen(a) - i - 1])
                  return 0;
      return 1;
}

struct tanso
{
      char name[1000];
      int stt;
};

int main()
{
      char x[1000];
      int t = 5;
      int n = 0;
      int max = 0;
      struct tanso ts[1000] = {};
      while (scanf("%s", &x) != EOF)
      {
                  int i = 0, kt = 1;
                  for (i = 0; i < n; i++)
                        if (strcmp(ts[i].name, x) == 0)
                        {
                              ts[i].stt++;
                              kt = 0;
                        }
                  if (kt)
                  {
                        strcpy(ts[n].name, x);
                        ts[n].stt = 1;
                        n++;
                  }
                  if (max < strlen(x))
                        max = strlen(x);
      }
      for (int j = 0; j < n; j++)
            if (strlen(ts[j].name) == max)
                  printf("%s %d %d\n", ts[j].name, max, ts[j].stt);
}