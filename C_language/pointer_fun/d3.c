//编写一个指针函数，实现字符串连接
#include <stdio.h>
char *mystrcat(char *dest, const char *source);
int main(int argc, char *argv[])
{
    char str1[] = "hello";
    char str2[] = "world";
    char *p = NULL;
    p = mystrcat(str1, str2);
    printf("%s\n", p);
    return 0;
}

char *mystrcat(char *dest, const char *source)
{

    char *p = dest; //记录起始地址
    /*
     while(*dest != '\0')
     {
         dest++;
     }
     while(*source != '\0')
     {
         *dest = *source;
         dest++;
         source++;
     }
     *dest = '\0';
     */

    //简化代码1
    /*
    char *p = dest;
    while(*dest++);
    dest--;
    while(*source)
    {
        *dest++ = *source++;
    }
    *dest = '\0';
    */

    //简化代码2
    while (*dest++);
    dest--;
    while (*dest++ = *source++);

    return p;
}
