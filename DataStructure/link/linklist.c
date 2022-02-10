#include "linklist.h"

/*
 * 函数名称：list_create
 * 函数功能：创建链表
 * 输入参数：无
 * 输出参数：无
 * 返回值：链表的首地址
 */
linklist list_create(void)
{
    linklist head = (linklist)malloc(sizeof(listnode));
    if (head == NULL)
    {
        printf("list malloc error!\n");
        return NULL;
    }
    head->data = 0;
    head->next = NULL;
    return head;
}

linklist list_create2(void)
{
    data_t data;      //接受用户输入的数据
    linklist r, node; //记录链表的尾部,r是指向新节点的指针,node是一个节点
    linklist head = (linklist)malloc(sizeof(listnode));
    if (head == NULL)
    {
        printf("list malloc error!\n");
        return NULL;
    }
    head->data = 0;
    head->next = NULL;
    r = head;
    while (1)
    {
        printf("input data(-1 exit):");
        scanf("%d", &data);
        if (data == -1)
        {
            break;
        }
        node = (linklist)malloc(sizeof(listnode));
        if (node == NULL)
        {
            printf("list malloc error!\n");
            return NULL;
        }
        node->data = data;
        node->next = NULL;

        r->next = node;
        r = node; // r指向新节点
    }
    return head; //返回链表的首地址
}

/*
 * 函数名称：list_head_insert
 * 函数功能：头插法
 * 输入参数：head：链表的首地址，data：要插入的数据
 * 输出参数：无
 * 返回值：0表示成功，-1表示失败
 */
int list_head_insert(linklist head, data_t data)
{
    linklist node = (linklist)malloc(sizeof(listnode)); //创建新节点
    if (node == NULL)
    {
        printf("list malloc error!\n");
        return -1;
    }
    node->data = data;       //插入数据
    node->next = head->next; //插入位置
    head->next = node;       //插入
    return 0;
}

/*
 * 函数名称：list_tail_insert
 * 函数功能：尾插法
 * 输入参数：head：链表的首地址，data：要插入的数据
 * 输出参数：无
 * 返回值：0表示成功，-1表示失败
 */
int list_tail_insert(linklist head, data_t data)
{
    linklist node = (linklist)malloc(sizeof(listnode)); //创建新节点
    if (node == NULL)
    {
        printf("list malloc error!\n");
        return -1;
    }
    node->data = data; //插入数据
    node->next = NULL; //插入位置
    linklist p = head; //指向链表的尾部
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = node; //插入
    return 0;
}

/*
* 函数名称：list_order_insert
* 函数功能：按顺序插入
* 输入参数：head：链表的首地址，data：要插入的数据
* 输出参数：无
* 返回值：0表示成功，-1表示失败
*/
int list_order_insert(linklist head, data_t data)
{
    linklist node = (linklist)malloc(sizeof(listnode)); //创建新节点
    if (node == NULL)
    {
        printf("list malloc error!\n");
        return -1;
    }
    node->data = data; //插入数据
    linklist p = head; //指向链表的尾部
    while (p->next != NULL && p->next->data < data)
    {
        p = p->next;
    }
    node->next = p->next;//插入位置
    p->next = node;//插入
    return 0;
}

/*
 *函数名称：list_insert
 *函数功能：指定位置插入指定数值
 *输入参数：head：链表的首地址，data：要插入的数据，pos：插入的位置
 *输出参数：无
 *返回值：0表示成功，-1表示失败
 */
int list_insert(linklist head, data_t data, int pos)
{
    linklist p, q;
    if (pos == 0)
    {
        p = head;
    }
    else
    {
        p = list_get(head, pos - 1);
    }

    if (p == NULL)
    {
        printf("parameter error!\n");
        return -1;
    }
    else
    {
        q = (linklist)malloc(sizeof(listnode));
        if (q == NULL)
        {
            printf("list malloc error!\n");
            return -1;
        }
        q->data = data;
        q->next = p->next;
        p->next = q;
        return 0;
    }
}

int list_delete(linklist head, int pos)
{
    linklist p, q;
    if (pos == 0)
    {
        p = head;
    }
    else
    {
        p = list_get(head, pos - 1);
    }
    if (p == NULL || p->next == NULL)
    {
        printf("parameter error!\n");
        return -1;
    }
    else
    {
        q = p->next;
        p->next = q->next;
        free(q);
        q = NULL;
        return 0;
    }
}

/*
 *函数名称：list_get
 *函数功能：获取指定位置的节点
 *输入参数：head：链表的首地址，pos：指定位置
 *输出参数：无
 *返回值：指定位置的节点的地址
 */
linklist list_get(linklist head, int pos)
{
    linklist p = head;
    int i = -1;
    if (pos < 0)
    {
        printf("pos error!\n");
        return NULL;
    }
    while (p->next != NULL && i < pos)
    {
        p = p->next;
        i++;
    }
    if (i == pos)
    {
        return p;
    }
    else
    {
        printf("pos error! pos>length\n");
        return NULL;
    }
}

/*
 *函数名称：list_locate
 *函数功能：查找指定数据的节点
 *输入参数：head：链表的首地址，data：指定数据
 *输出参数：无
 *返回值：指定数据的节点的地址
 */
linklist list_locate(linklist head, data_t data)
{
    linklist p = head;
    while (p && p->data != data)
    {
        p = p->next;
    }
    return p;
}

/*
 *函数名称：list_reverse
 *函数功能：反转链表
 *输入参数：head：链表的首地址
 *输出参数：无
 *返回值：无
 */
void list_reverse(linklist head)
{
    linklist p;
    linklist q;
    p = head->next;    // p指向第一个节点
    head->next = NULL; // head指向空
    while (p)          // p不为空
    {
        q = p;       // q指向p
        p = p->next; // p指向p的下一个节点

        //头部插入
        q->next = head->next; // q指向head的下一个节点
        head->next = q;       // head指向q
    }
}

/*
函数名称：list_sort
函数功能：排序链表
输入参数：head：链表的首地址
输出参数：无
返回值：无
*/
void list_sort(linklist head)
{
    linklist p, q, r;
    p=head->next;
    head->next=NULL;
    while (p)
    {
        q = p;
        p = p->next;

        r = head;
        while (r->next != NULL && r->next->data < q->data)
        {
            r = r->next;
        }
        q->next = r->next;
        r->next = q;
    }
}
/*
 * 函数名称：list_show
 * 函数功能：显示链表
 * 输入参数：head：链表的首地址
 * 输出参数：无
 * 返回值：无
 */
void list_show(linklist head)
{
    listnode *p = head->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
