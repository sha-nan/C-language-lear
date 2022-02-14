#include "sqstack.h"

int main(int argc, char **argv)
{
    sqstack *s;
    int n = 10;
    s = sqstack_create(n);
    stack_push(s, 10);
    stack_push(s, 20);
    stack_push(s, 30);
    stack_push(s, 40);

    while (!stack_empty(s))
    {
        printf("%d", stack_pop(s));
    }
    puts("");
    return 0;
}
