#ifndef _SQSTACK_H_
#define _SQSTACK_H_

#include <stdio.h>
#include <stdlib.h>

typedef int data_t; //定义栈中数据元素的数据类型

typedef struct
{
    data_t *data; //用指针指向栈的存储空间
    int maxlen;   //当前栈的最大元素个数
    int top;      //指示栈顶位置（数组下标）的变量
} sqstack;        //顺序栈数据类型定义

extern sqstack *stack_create(int len); //创建栈
extern int stack_empty(sqstack *s);   //判断栈是否为空
extern void stack_clear(sqstack *s);  //清空栈
extern int stack_full(sqstack *s);    //判断栈是否为满
extern int stack_push(sqstack *s, data_t data);
extern data_t stack_pop(sqstack *s);
extern data_t stack_top(sqstack *s);
extern void stack_free(sqstack *s);

#endif
