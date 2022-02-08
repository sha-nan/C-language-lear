#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(int argc, char **argv)
{
    int m = 10, n = 20;
    int (*p[4])(int, int);//函数指针数组的声明，形参可以不用写
    
    p[0]= add;//函数指针数组的赋值
    printf("%d\n", (*p[0])(m, n));//函数指针数组的使用
    p[1]=sub;
    printf("%d\n", (*p[1])(m, n));
    p[2]=mul;
    printf("%d\n", (*p[2])(m, n));
    p[3]=div;
    printf("%d\n", (*p[3])(m, n));

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
