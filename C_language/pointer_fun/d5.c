//编程求n!(递归程序)
#include <stdio.h>

int recursion(int);

int main(int argc, char **argv)
{
    int n = 0;
    int ret = 1;
    printf("please input n:");
    scanf("%d", &n);
    ret = recursion(n);
    printf("%d!=%d\n", n, ret);
    return 0;
}

int recursion(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * recursion(n - 1);
}
