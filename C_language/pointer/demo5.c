#include <stdio.h>

int main(int argc, char **argv)
{
    int a[] = {1, 2, 3, 4, 5};
    int *p, i, n;

    p = a;
    n = sizeof(a) / sizeof(int);

    for (i = 0; i < n; i++)
    {
        printf("%d %d %d %d\n", a[i], *(p + i), *(a + i), p[i]);
    }
    puts("");
    p++;
    printf("%d\n", p[1]); //*(p + 1)

    return 0;
}
