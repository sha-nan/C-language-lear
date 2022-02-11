#include "dlist.h"


/*
函数名：dlist_create
功能：创建一个空的双向链表
参数：无
返回值：返回一个空的双向链表
*/
dlistnode* dlist_create(void)
{
    dlistnode *head = (dlistnode*)malloc(sizeof(dlistnode));
    if(head == NULL)
    {
        printf("malloc error!\n");
        exit(1);
    }
    head->next = head;
    head->prev = head;
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

}

