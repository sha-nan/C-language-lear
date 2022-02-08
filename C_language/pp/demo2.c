#include <stdio.h>

int main(int argc, char **argv)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p[2] = {&a[0], &a[1]};//int *---------p[0] p[1]
    int **q;
    q=&p[0];
    q = p;
    printf("%d %d\n",a[0],a[1]);
    printf("%d %d\n",*p[0],*p[1]);
    printf("%d %d\n",**q,**(q+1));
    return 0;
}
