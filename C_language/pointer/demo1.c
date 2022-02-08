#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 10;
    int *p;
    int *q;

    q = &a;
    p = &a;

    printf("&p:%p %ld\n", &p, sizeof(p));
    printf("%p %p\n", p, &a);
    printf("a:%d *p:%d\n", a, *p);
    return 0;
}
