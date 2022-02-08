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
    char *s1 = str;
    char *s2 = str;
    while (*s1 != '\0')
    {
        if(*s1==' ')
        {
            s1++;
        }
        else
        {
            *s2=*s1;
            s2++;
            s1++;
        }
    }
    *s2 = '\0';
}
