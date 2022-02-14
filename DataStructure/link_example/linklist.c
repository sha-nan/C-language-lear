#include "linklist.h"

/*
 *函数名称：list_create
 *函数功能：创建链表
 *函数参数：无
 *函数返回值：链表头指针
 */
linklist list_create(void)
{
    linklist head; //头结点
    linklist r;    //指向最后一个节点
    linklist p;    //指向当前节点
    int num;
loop:
    printf("please input the num of node:");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("num > 0\n");
        goto loop;
    }

    head = (linklist)malloc(sizeof(listnode));
    if (head == NULL)
    {
        printf("malloc error\n");
        return head;
    }
    head->data = 1;
    head->next = head;
    r = head;

    for (int i = 2; i <= num; i++)
    {
        p = (linklist)malloc(sizeof(listnode)); //创建新节点
        if (p == NULL)
        {
            printf("malloc error\n");
            return p;
        }
        p->data = i;
        r->next = p;
        r = p;
    }
    p->next = head; //环形链表
    return head;
}

void list_jose(linklist head, int k, int m)
{

    linklist r, p;
    r = head;
    while (r->next->data != k)
    {
        r = r->next;
    }
    printf("k=%d\n", k);
    while (r->next != r)
    {
        for (int i = 0; i < m - 1; i++)
        {
            r = r->next;
        }
        p = r->next;
        r->next = p->next;
        printf("%d\n", p->data);
        free(p);
        p = NULL;
    }
    printf("%d\n", r->data);
    free(r);
    r = NULL;
}
/*
 *函数名称：list_show
 *函数功能：遍历链表
 *函数参数：head：链表头结点
 *函数返回值：无
 */
void list_show(linklist head)
{
    linklist p;
    p = head;
    while (p->next != head) //循环到最后一个节点
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d\n", p->data); //打印最后一个节点
}
