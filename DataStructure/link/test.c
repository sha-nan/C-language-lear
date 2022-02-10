#include "linklist.h"

int main(int argc, char **argv)
{
    linklist head = list_create();
    list_head_insert(head, 5);
    list_head_insert(head, 3);
    list_head_insert(head, 1);
    list_head_insert(head, 8);
    list_head_insert(head, 21);
    list_head_insert(head, 13);
    list_head_insert(head, 10);
    list_head_insert(head, 7);
    list_head_insert(head, 4);
    list_head_insert(head, 77);
    list_head_insert(head, 88);
    list_head_insert(head, 66);
    list_head_insert(head, 30);
    printf("排序前：");
    list_show(head);
    list_sort(head);
    printf("排序后：");
    list_show(head);
    return 0;
}
