#include<stdio.h>

void swap(int *a, int *b)
{
    int tp = *a; 
    *a = *b;
    *b = tp;
}

int main ()
{
    int n;
    scanf("%d", &n);
    int a[104];
    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int min, k , buoc = 0;
    int i = 0, j = n, min;
    while( i < n && j > i)
    {
        if(a[j] < a[i])
            swap(a[i], a[j]);
        
    }
}