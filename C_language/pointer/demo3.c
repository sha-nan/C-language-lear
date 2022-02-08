#include <stdio.h>

int main(int argc, char **argv)
{
    int a[5]={4,5,6,7,8};
    int *p,*q;

    p = a;//&a[0];
    q = &a[3];

    printf("%p %p\n", p, q);
    printf("%d %d\n", *p, *q);
    printf("%ld\n", q-p);
    return 0;
}
