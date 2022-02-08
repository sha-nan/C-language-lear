//使用void指针遍历一维数组（可以避免指针指向的数据类型不匹配的问题）
#include <stdio.h>

int main(int argc, char **argv)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    void *p;
    int n;

    n = sizeof(a) / sizeof(a[0]);
    p = a;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *((int *)p+i));
    }
    puts("");
    return 0;
}
