#include "dlist.h"

/*
 * 函数名称：dlist_create
 * 函数功能：创建一个空的双向链表
 * 输入参数：无
 * 输出参数：无
 * 返 回 值：返回一个空的双向链表
 */
dlistnode *dlist_create(void)
{
    int num;
    dlistnode *p, *r;
    dlistnode *head = (dlistnode *)malloc(sizeof(dlistnode));
    if (head == NULL)
    {
        printf("malloc error!\n");
        return NULL;
    }
    head->next = head;
    head->prev = head;
    r = head;

    while (1)
    {
        printf("please input(-1 exit):");
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        if (p = (dlistnode *)malloc(sizeof(dlistnode)))
        {
            printf("malloc error!\n");
            return NULL;
        }
        p->data = num;

        p->prev = r;       // p->prev = head;
        p->next = r->next; // p->next = head;
        r->next = p;       //插入到链表尾部
        head->prev = p;    //更新头节点的prev指针
        r = p;             // r指向最后一个节点
    }

    return head;
}

/*
函数名：dlist_show
功能：打印双向链表
参数：head：双向链表的头节点
返回值：无
*/
void dlist_show(dlistnode *head)
{
    dlistnode *p;
    p = head->next;
    while (p != head)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
