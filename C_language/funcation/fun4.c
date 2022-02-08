//编写一个函数，统计字符串中大小写字母的个数，并把字符串中的小写字母转化成大写字母
#include <stdio.h>

int strfunc(char *str);

int main(int argc, char **argv)
{
    char s[] = "hello world";
    int num = 0;

    num = strfunc(s);

    printf("%s\n", s);
    printf("num=%d\n", num);
    return 0;
}

int strfunc(char *str)
{
    int ret = 0;
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
            ret++;
        }
        str++;
    }
    return ret;
}
