//实现两个字符串拼接
#include <stdio.h>

int main(int argc, char **argv)
{
    char ch1[100] = "Hello";
    char ch2[] = "World";
    char *p, *temp;
    p = ch1;
    while (*p != '\0')
        p++;

    temp = p;
    p = ch2;
    while (*p != '\0')
    {
        *temp = *p;
        temp++;
        p++;
    }
    puts(ch1);
    puts(ch2);
    return 0;
}
