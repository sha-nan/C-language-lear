#include "linkstack.h"

linklist linkstack_create(void)
{
    linklist s;
    s = (linklist)malloc(sizeof(listnode));
    if (s == NULL)
    {
        printf("malloc failed\n");
        return NULL;
    }
    s->next = NULL;
    return s;
}
int linkstack_empty(linklist s)
{
    return (s->next == NULL ? 1 : 0);
}

int linkstack_push(linklist s, data_t data)
{
    linklist p;
    p = (linklist)malloc(sizeof(listnode));
    if (p == NULL)
    {
        printf("malloc error!\n");
        return -1;
    }
    p->data = data;

    p->next = s->next;
    s->next = p;

    return 0;
}

/*
*函数名称：linkstack_pop
*函数功能：出栈
*输入参数：s：栈链表
*输出参数：无
*返回值：返回出栈的数据
*/
data_t linkstack_pop(linklist s)
{
    linklist p;
    data_t ret;

    p = s->next;
    s->next = p->next;
    ret = p->data;
    free(p);
    p = NULL;

    return ret;
}

data_t linkstack_top(linklist s)
{
    linklist p;
    p = s->next;
    return p->data;
}
void linkstack_clear(linklist s)
{
    linklist p;
    p = s->next;
    while (p)
    { 
        s->next = p->next;
        free(p);
        p = NULL;
    }
}
void linkstack_free(linklist s)
{
    
}
