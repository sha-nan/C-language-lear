#include "linklist.h"

int main(int argc, char **argv)
{
// linklist head = list_create2();
#if 1
    int n;
    linklist head = list_create();
    list_head_insert(head, 1);
    list_head_insert(head, 2);
    list_head_insert(head, 3);
    list_show(head);
#endif

#if 0
    printf("input pos:");
    scanf("%d", &n);
    if ((p = list_get(head, n)) != NULL)
    {
        printf("%d\n", p->data);
    }
#endif

#if 0
    printf("input value:");
    scanf("%d", &n);
    if ((p = list_locate(head, n)) != NULL)
    {
        printf("found:%d\n", p->data);
    }
    else
    {
        printf("not found:%d\n",n);
    }
#endif

#if 0
    printf("input pos:");
    scanf("%d", &n);
    if ((list_insert(head, 90, n)) != -1)
    {
        printf("insert success!\n");
    }
    else
    {
        printf("insert failed!\n");
    }
#endif

    printf("pleas input delete pos:");
    scanf("%d", &n);
    if ((list_delete(head, n)) != -1)
    {
        printf("delete success!\n");
    }
    else
    {
        printf("delete failed!\n");
    }

    list_show(head);
    return 0;
}
