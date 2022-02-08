#include <stdio.h>

int main(int argc, char **argv)
{
    int a[5] = {4, 5, 6, 7, 8};
    int *p, *q, n, t;
    n = sizeof(a) / sizeof(int);

    p = a; //&a[0];
    q = &a[n - 1];

    while (p < q)
    {
        t = *p;
        *p = *q;
        *q = t;
        p++;
        q--;
    }
    for (t = 0; t < n; t++)
        printf("%d\n", a[t]);
    return 0;
}
