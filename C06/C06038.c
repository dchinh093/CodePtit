#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int check(char a[100], char b[100])
{
      if (strlen(a) != strlen(b))
            return -1;
      char tmp[200] = {};
      strcpy(tmp, a);
      strcat(tmp, a);
      char *p = strstr(tmp, b);
      if (p)
            return p - tmp;
      else
            return -1;
}

void reverse(char *str)
{
      int i, j;
      char temp;
      for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
      {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
      }
}

char *add(char num1[], char num2[])
{
      static char sum[MAX];
      char a[MAX], b[MAX];
      memset(a, '\0', sizeof(a));
      memset(b, '\0', sizeof(b));
      memset(sum, '\0', sizeof(sum));
      int carry = 0;
      int i;

      strcpy(a, num1);
      strcpy(b, num2);

      reverse(a);
      reverse(b);

      if (strlen(num1) > strlen(num2))
      {
            for (i = strlen(num2); i < strlen(num1); i++)
                  b[i] = '0';
            b[i] = '\0';
      }
      else if (strlen(num1) < strlen(num2))
      {
            for (i = strlen(num1); i < strlen(num2); i++)
                  a[i] = '0';
            a[i] = '\0';
      }

      for (i = 0; i < strlen(a); i++)
      {
            sum[i] = ((a[i] - '0') + (b[i] - '0') + carry) % 10 + '0';
            carry = ((a[i] - '0') + (b[i] - '0') + carry) / 10;
      }

      if (carry > 0)
            sum[strlen(a)] = carry + '0';

      reverse(sum);
      return sum;
}

int main()
{
      int t;
      scanf("%d", &t);
      getchar();
      while (t--)
      {
            char s[1000];
            gets(s);
            char x[1000] = {};
            int kt = 1;
            for (int i = 0; i < strlen(s); i++)
            {
                  strcpy(x,add(x, s));
                  if (check(x, s) == -1)
                  {
                        kt = 0;
                        break;
                  }

            }
            if (kt)
                  printf("YES\n");
            else
                  printf("NO\n");
      }
}