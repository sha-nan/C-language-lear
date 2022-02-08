#include "linklist.h"

int main(int argc, char **argv)
{
    int n;
    linklist head = list_create();
    list_head_insert(head, 1);
    list_head_insert(head, 2);
    list_head_insert(head, 3);
    list_show(head);

    printf("pleas input delete pos:");
    scanf("%d", &n);
    if ((list_delete(head, n)) == -1)
    {
        printf("delete failed!\n");
    }
    list_show(head);
    list_reverse(head);
    list_show(head);
    return 0;
}
