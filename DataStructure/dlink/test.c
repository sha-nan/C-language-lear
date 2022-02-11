#include "dlist.h"

int main(int argc, char **argv)
{
    int pos;

    dlistnode *head = dlist_create();
    dlist_show(head);
    while (1)
    {
        printf("please input pos:");
        scanf("%d", &pos);
        dlist_delete(head, pos);
        dlist_show(head);
    }
#if 0   
    while (1)
    {
        printf("please input pos:");
        scanf("%d", &pos);
        dlist_insert(head, 100, pos);
        dlist_show(head);
    }
#endif
#if 0
    while (1)
    {
        printf("please input pos:");
        scanf("%d", &pos);
        p = dlist_get(head, pos);
        if (p)
        {
            printf("%d\n", p->data);
        }
        else
        {
            printf("pos error!\n");
        }
    }
#endif

    return 0;
}
