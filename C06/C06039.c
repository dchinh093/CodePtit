#include <stdio.h>
#include <limits.h>
#include <string.h>

int check(char a[100], char b[100])
{
      if(strlen(a) != strlen(b))
            return -1;
      char s[1000] = {};
      strcpy(s, a);
      strcat(s, a);
      char *p = strstr(s, b);
      if (p != NULL)
            if (p - s == 0)
                  return 0;
            else
                  return strlen(a) - (p - s);
      else
            return -1;
}

struct nme
{
      char s[100];
};

int main()
{
      struct nme name[100];
      int n, min = INT_MAX, kt = 1;
      scanf("%d", &n);
      getchar();
      char s[100][100];
      for (int i = 0; i < n; i++)
            gets(name[i].s);
      for (int i = 0; i < n; i++)
      {
            int d = 0;
            for (int j = 0; j < n; j++)
            {
                  if (check(name[i].s, name[j].s) == -1)
                  {
                        kt = 0;
                        break;
                  }
                  d += check(name[i].s, name[j].s);
            }
            if (d < min)
                  min = d;
      }
      if (kt)
            printf("%d", min);
      else
            printf("-1");
      return 0;
}