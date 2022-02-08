#include <stdio.h>

int main(int argc, char **argv)
{
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int(*p)[2], n, i, j;

    n = sizeof(a) / sizeof(int);
    p = a;

    printf("%p %p\n", a, a + 1);
    printf("%p %p\n", p, p + 1);
    printf("%d %d\n", a[1][1], p[1][1]);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d,%d,%d,", a[i][j], p[i][j], *(*(p + i) + j));
        }
        puts("");
    }

    return 0;
}
