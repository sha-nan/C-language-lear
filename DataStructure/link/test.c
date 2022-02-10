#include "linklist.h"

int main(int argc, char **argv)
{
    linklist head = list_create();
    list_head_insert(head, 5);
    list_head_insert(head, 3);
    list_head_insert(head, 1);
    list_show(head);
    list_order_insert(head, 4);
    list_order_insert(head, 6);
    list_order_insert(head, 0);
    list_show(head);
    return 0;
}
