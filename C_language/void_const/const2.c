#include <stdio.h>

int main(int argc, char **argv)
{
    const int *p;
    int *const q;
    int m = 10;
    int n = 20;
    const int *const r = &m;

    p = &m; // right

    //(*p)++;error: increment of read-only variable ‘*p’
    *q = 20; // right
    // q=&m;error: assignment of read-only variable ‘q’
    //r++;//error: increment of read-only variable ‘r’
    //(*r)++;//error: assignment of read-only variable ‘*r’
    return 0;
}
