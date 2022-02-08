#include <stdio.h>

int sum_array(int *a, int n);

int main(int argc, char **argv)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 0, sum = 0;

    n = sizeof(a) / sizeof(int);

    sum = sum_array(a, n);
    printf("sum=%d\n", sum);

    return 0;
}

int sum_array(int *q, int n)
{
    int ret = 0;
    printf("n=%d\n", n);
    for (int i = 0; i < n; i++)
    {
        ret += *(q + i);
    }
    return ret;
}
