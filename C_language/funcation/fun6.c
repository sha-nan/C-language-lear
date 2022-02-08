//删除字符串中的空格
#include <stdio.h>
void delete_space(char *str);
int main(int argc, char **argv)
{
    char s[] = "h e l l o w o r l d";
    puts(s);
    delete_space(s);
    printf("%s\n", s);
    return 0;

}

void delete_space(char *str)
{
    char *p = str;
    char *q = str;
    while (*p != '\0')
    {
        if (*p != ' ')
        {
            *q = *p;
            q++;
        }
        p++;
    }
    *q = '\0';
}
