#include <stdio.h>
#include <string.h>

void mix(char a[1000], char b[1000], int len)
{
      char s[1000], s1[1000], s2[1000];
      s[0] = '\0';
      strcat(s, a);
      strcat(s, b);
      for (int i = 0; i < len * 2; i++)
      {
            if (i % 2 == 0)
                  s[i] = b[i / 2];
            else if (i % 2 == 1)
                  s[i] = a[i / 2];
      }
      for (int i = 0; i < len; i++)
      {
            a[i] = s[i];
            b[i] = s[i + len];
      }
      
}


int main()
{
      while (1)
      {
            int n;
            scanf("%d", &n);
            getchar();
            if (n == 0)
                  return n;
            char x[1000];
            char y[1000];
            char z[1000];
            gets(x);
            gets(y);
            gets(z);

            char check[1000];
            char kq[1000];
            strcpy(kq, x);
            check[0] = '\0';
            int kt = 1, dem = 0;
            while (strcmp(kq, check) != 0)
            {
                  char sum[1000];
                  sum[0] = '\0';
                  mix(x, y, n);
                  if (strcmp(x,kq) == 0)
                  {
                        kt = 0;
                        break;
                  }
                  dem += 1;
                  strcpy(check, x);
                  strcat(sum, x);
                  strcat(sum, y);
                  if (strcmp(sum, z) == 0)
                        break;
                  
            }
            if (kt)
                  printf("%d\n", dem);
            else
                  printf("-1\n");
      }
}
