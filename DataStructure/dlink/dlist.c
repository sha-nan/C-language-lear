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
        if ((p = (dlistnode *)malloc(sizeof(dlistnode))) == NULL)
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
 *函数名称：dlist_insert
 *函数功能：插入节点
 *输入参数：head：双向链表头指针；data：要插入的数据；pos：插入的位置
 *输出参数：无
 *返回值：成功返回0，失败返回-1
 */
int dlist_insert(dlistnode *head, data_t data, int pos)
{
    dlistnode *p, *q;

    p = dlist_get(head, pos);
    if (p == NULL)
    {
        return -1;
    }
    if ((q = (dlistnode *)malloc(sizeof(dlistnode))) == NULL)
    {
        printf("malloc error!\n");
        return -1;
    }
    q->data = data;

    q->prev = p->prev;
    q->next = p;
    p->prev->next = q;
    p->prev = q;
}

/*
*函数名称：dlist_delete
*函数功能：删除节点
*输入参数：head：双向链表头指针；pos：删除的位置
*输出参数：无
*返回值：成功返回0，失败返回-1
*/
int dlist_delete(dlistnode *head,int pos)
{
    dlistnode *p;
    p=dlist_get(head,pos);//获取要删除的节点
    if(p==NULL)
    {
        return -1;
    }
    p->prev->next=p->next;//删除节点
    p->next->prev=p->prev;
    free(p);
    p= NULL;

    return 0;
    
}

/*
 *函数名称：dlist_get
 *函数功能：获取第pos个节点
 *输入参数：head:链表头指针；pos:节点位置
 *输出参数：无
 *返回值：返回第pos个节点
 */
dlistnode *dlist_get(dlistnode *head, int pos)
{
    dlistnode *p = head;
    int i = -1;
    if (pos < 0)
    {
        printf("pos is invalid!\n");
        return NULL;
    }
    while (i < pos)
    {
        p = p->next;
        i++;
        if (p == head)
        {
            printf("pos is invalid!\n");
            return NULL;
        }
    }
    return p;
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
