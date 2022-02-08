#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(int argc, char **argv)
{
    int m = 10, n = 20;
    int (*p)(int, int);//函数指针的声明，形参可以不用写
    p = add;//函数指针的赋值

    //printf("%d\n", add(m, n));
    printf("%d\n", (*p)(m, n));//函数指针的使用
    p=sub;
    printf("%d\n", (*p)(m, n));
    p=mul;
    printf("%d\n", (*p)(m, n));
    p=div;
    printf("%d\n", (*p)(m, n));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
