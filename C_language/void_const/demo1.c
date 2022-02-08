#include "stdio.h"

int main(int argc, char **argv)
{
    int m = 10;
    double n = 3.14;
    void *p;

    p = &m; //(void *)&m;
    printf("%d %d\n", m, *(int *)p);

    p = &n; //(void *)&n;
    printf("%.2lf %.2lf\n", n, *(double *)p);

    return 0;
}
