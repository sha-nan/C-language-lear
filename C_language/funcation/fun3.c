//交换两个数，函数参数传递--->地址传递方式实现
#include<stdio.h>

void swap(int *x, int *y);

int main(int argc, char **argv)
{
    int a = 10, b = 20;
    printf("before:a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("after:a=%d, b=%d\n", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("swap:a=%d, b=%d\n", *x, *y);
}
