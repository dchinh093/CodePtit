#include <stdio.h>
#include <string.h>

void subtract(char num1[], char num2[], char result[])
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    if (len1 > len2)
    {
        for (int i = len2; i > 0; i--)
        {
            num2[i + len1 - len2 - 1] = num2[i - 1];
        }
        for (int i = 0; i < len1 - len2; i++)
        {
            num2[i] = '0';
        }
        num2[len1] = '\0';
    }
    else if (len2 > len1)
    {
        for (int i = len1; i > 0; i--)
        {
            num1[i + len2 - len1 - 1] = num1[i - 1];
        }
        for (int i = 0; i < len2 - len1; i++)
        {
            num1[i] = '0';
        }
        num1[len2] = '\0';
    }

    int length = strlen(num1);
    int carry = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        int digit1 = num1[i] - '0';
        int digit2 = num2[i] - '0';

        int diff = digit1 - digit2 - carry;

        if (diff < 0)
        {
            diff += 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        result[i] = diff + '0';
    }

    result[length] = '\0';

    int start = 0;
    while (result[start] == '0' && result[start + 1] != '\0')
    {
        start++;
    }

    if (start > 0)
    {
        int i;
        for (i = 0; result[i + start] != '\0'; i++)
        {
            result[i] = result[i + start];
        }
        result[i] = '\0';
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char num1[1000];
        char num2[1000];
        char result[1000];
        scanf("%s", num1);
        scanf("%s", num2);
        if (strlen(num1) < strlen(num2) || ((strlen(num1) == strlen(num2) && strcmp(num1,num2) < 0)))
            subtract(num2, num1, result);
        else
            subtract(num1, num2, result);
        printf("%s\n", result);
    }
    return 0;
}