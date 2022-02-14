#include "sqstack.h"

sqstack *stack_create(int len)
{
    sqstack *s;
    s = (sqstack *)malloc(sizeof(sqstack));
    if (s == NULL)
    {
        printf("sqstack malloc failed!\n");
        return NULL;
    }
    s->data = (data_t *)malloc(len * sizeof(data_t));
    if (s->data == NULL)
    {
        printf("sqstack date malloc failed!\n");
        return NULL;
    }
    s->maxlen = len;
    s->top = -1;
    return s;
}

/*
 *函数名称：stack_empty
 *函数功能：
 */
int stack_empty(sqstack *s) //判断栈是否为空
{
    return (s->top == -1 ? 1 : 0);
}
void stack_clear(sqstack *s)
{
    s->top = -1;
}
int stack_full(sqstack *s)
{
    return (s->top == s->maxlen - 1 ? 1 : 0);
}
int stack_push(sqstack *s, data_t data)
{   
    if(s->top==s->maxlen-1)
    {
        printf("stack is full\n");
        return -1;
    }
    s->data[s->top+1]=data;
    s->top++;

    return 1;
}

data_t stack_pop(sqstack *s)
{
    s->top--;
    return s->data[s->top+1];
}
data_t stack_top(sqstack *s)
{
    return (s->data[s->top]);
}

void stack_free(sqstack *s)
{
    free(s->data);
    s->data=NULL;
    free(s->top);
    s = NULL;
}
