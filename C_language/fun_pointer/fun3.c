//利用qsort实现整形数组的排序
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *, const void *);

int main(int argc, char* argv[])
{
    int a[10] = {32, 2, 1, 44, 25, 26, 74, 38, 49, 140};
    int i = 0;
    int n=sizeof(a)/sizeof(int);

    qsort(a, n, sizeof(int), cmp);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

int cmp(const void *p, const void *q)
{
    return (*(int*)p - *(int*)q);//指针的强制转换，比较两个整形数据的大小
}
