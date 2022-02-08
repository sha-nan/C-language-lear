//编写一个指针函数删除字符串中的空格
#include <stdio.h>
char *del_space(char *str);

int main(int argc, char *argv[])
{
    char str[] = "h e l l o w o r l d";
    puts(del_space(str));
    puts(str);
    return 0;
}

char *del_space(char *str)
{
    char *ret = str;
    char *p = str;
    char *q = str;
    while (*p != '\0')
    {
        if (*p == ' ')
        {
            p++;
        }
        else
        {
            *q = *p;
            q++;
            p++;
        }
    }
    *q = '\0';
    return ret;
}
