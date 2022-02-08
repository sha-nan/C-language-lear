//将数字转换为字符串
#include <stdio.h>

char *itoa(int number);
char *myitoa(int number);

int main(int argc, char **argv)
{
    int n;
    char *s;
    printf("please input a number:");
    scanf("%d", &n);

    s = myitoa(n);

    puts(s);
    s=itoa(n);
    puts(s);
    return 0;
}

char *itoa(int number)
{
    static char s[32];
    int i = 0, j, sign;
    if ((sign = number) < 0)
    {
        number = -number;
    }
    do
    {
        s[i++] = number % 10 + '0';
    } while ((number /= 10) > 0);
    if (sign < 0)
    {
        s[i++] = '-';
    }
    s[i] = '\0';
    for (j = 0; j < i / 2; j++)
    {
        char temp = s[j];
        s[j] = s[i - j - 1];
        s[i - j - 1] = temp;
    }
    return s;
}

char *myitoa(int number)
{
    int ret, i = 0,j;
    static char s[32];

    while (number)
    {
        ret = number % 10;
        number = number / 10;
        s[i++] = ret + '0';
    }
    s[i] = '\0';
    j = i - 1;
    i = 0;
    while (i<j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}
