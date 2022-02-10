#include <stdio.h>

int fun(char *s)
{
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ' && s[i + 1] == ' ') 
        {
            j++;
        }
    }
    j++;
    return j;
}

int main()
{
    char s[50] = "hello world six five";
    printf("单词个数：%d\n", fun(s));
    return 0;
}
