//交换两个数，函数参数传递--->复制传递方式实现
#include<stdio.h>

void swap(int a, int b);

int main(int argc, char **argv)
{
    int a = 10, b = 20;
    printf("before:a=%d, b=%d\n", a, b);
    swap(a, b);
    printf("after:a=%d, b=%d\n", a, b);
    return 0;
}

void swap(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("swap:a=%d, b=%d\n", a, b);
}
