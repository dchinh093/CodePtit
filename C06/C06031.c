#include <stdio.h>
#include <math.h>
#include <string.h>

int max(int a, int b)
{
      if (a > b)
            return a;
      return b;
}

int main()
{
      char s[1000];
      gets(s);
      int min = 100;
      int f[1000];
      int d = 1;
      for (int i = 0; i < strlen(s); i++)
      {
            f[i] = 1;
            for (int j = 0; j < i; j++)
                  if (s[j] < s[i])
                        f[i] = max(f[i], f[j] + 1);
            d = max(d, f[i]);
      }
      printf("%d", 26 - d);
}