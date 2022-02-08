/*
编程：利用指针数组处理一个二维数组，要求求出二维数组所有元素的和
*/
#include <stdio.h>

int main(int argc, char **argv)
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p[2] = {a[0], a[1]};
    int sum = 0;

    printf("total:%ld\n", sizeof(p));
    // printf("%p %p\n", p[0], a[0]);
    // printf("%p %p\n", p[1], a[1]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += *(p[i] + j); //*(p[i] + j) = a[i][j]=*(a[i]+j)
            printf("%d ", *(p[i] + j));
        }
        puts("");
    }
    printf("sum=%d\n", sum);
}
