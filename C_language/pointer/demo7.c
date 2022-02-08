#include <stdio.h>

int main(int argc, char **argv)
{
    int a[3][2] = {{1, 2}, {2, 3}, {3, 4}};
    int *p, n, i;

    n = sizeof(a) / sizeof(int);
    p = &a[0][0];

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    puts("");
    return 0;
}
