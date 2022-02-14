//Joseph问题是一个经典的问题，它的解法是：
#include "linklist.h"

int main(int argc, char **argv)
{
    linklist head;
    int k=3,m=4;

    head = list_create();
    list_show(head);
    list_jose(head,k,m);

    return 0;
}
