#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
      int t;
      scanf("%d", &t);
      getchar();
      while(t--)
      {
            char sx[1000];
            gets(sx);
            int n = 0;
            char s1[1005][1005];
            char s[100];
            char *tok = strtok(sx, " -.");
            while (tok != NULL)
            {
                  strcpy(s1[n], tok);
                  n++;
                  tok = strtok(NULL, " -.");
            }
            strcat(s1[n - 2], s1[n - 1]);
            strcpy(s, s1[n - 2]);
            //printf("%s\n", s);
            n = strlen(s);
            int t = 1, l = 1, b = 1, c = 0;
            if (s[0] != '6' && s[0] != '8')
                  l = 0;
            for (int i = 1; i < n; i++)
            {
                  if (s[i] != '6' && s[i] != '8')
                        l = 0;
                  if (s[i - 1] >= s[i])
                        t = 0;
                  if (s[i] != s[0])
                        b = 0;
            }
            if (s[0] == s[1] && s[1] == s[2] && s[3] == s[4])
                  c = 1;
            //printf("%d %d %d %d\n", t, l, b, c);
            if (t == 1 || l == 1 || b == 1 || c == 1)
                  printf("YES\n");
            else
                  printf("NO\n");
      }
}