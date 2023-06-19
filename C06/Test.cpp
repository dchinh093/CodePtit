#include <bits/stdc++.h>

using namespace std;
long n, i, j, scs, h, tg, nho = 0;
int main()
{
      cin >> n;
      char a[] = "0588235294117647\0";
      
      scs = 1;
            for (j = 1; j <= scs; j++)
            {
                  tg = a[j] * i + nho;
                  a[j] = tg % 10;
                  nho = tg / 10;
            }
            while (nho > 0)
            {
                  scs++;
                  a[scs] = nho % 10;
                  nho /= 10;
            }
      for (i = scs; i >= 1; i--)
            cout << a[i];
      return 0;
}