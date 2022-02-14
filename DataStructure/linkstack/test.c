#include "linkstack.h"

int main(int argc, char **argv)
{
    linklist s;
    s = linkstack_create();
    linkstack_push(s, 20);
    linkstack_push(s, 10);
    linkstack_push(s, 30);
    linkstack_push(s, 50);

    while (!linkstack_empty(s))
    {
        printf("%d ", linkstack_pop(s));
    }
    puts("");
    return 0;
}
