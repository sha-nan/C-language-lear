#include <stdio.h>

int main(int argc, char **argv)
{
    // char *s1="apple";
    // char *s2="banana";
    char *s[] = {"apple", "banana", "orange"};
    char **p;
    int i=0, n;
    p=&s[0];//p=s;
    
    n = sizeof(s) / sizeof(char *);
    while (i < n)
    {
        printf("%s %s\n", s[i], *(p+i));
        i++;
    }
}
