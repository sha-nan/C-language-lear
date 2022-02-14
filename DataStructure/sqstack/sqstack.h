#ifndef _SQSTACK_H_
#define _SQSTACK_H_

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;

typedef struct
{
    data_t *data; //存放数据的数组
    int maxlen;   //最大长度
    int top;      //栈顶指针
} sqstack;

extern sqstack *stack_creat(int len); //创建栈
extern int stack_empty(sqstack *s);   //判断栈是否为空
extern void stack_clear(sqstack *s);   //清空栈
extern int stack_full(sqstack *s);      //判断栈是否为满
extern int stack_push(sqstack *s, data_t data);
extern data_t stack_pop(sqstack *s);
extern data_t stack_top(sqstack *s);


#endif
