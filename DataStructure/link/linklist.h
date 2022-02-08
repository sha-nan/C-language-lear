#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;

typedef struct node
{
    data_t data;
    struct node *next;
} listnode, *linklist;

linklist list_create(void);                           //创建链表
linklist list_create2(void);                          //创建链表,用户输入数据
int list_head_insert(linklist head, data_t data);     //头插法
int list_tail_insert(linklist head, data_t data);     //尾插法
int list_order_insert(linklist head, data_t data);    //有序插入
int list_delete(linklist head, int pos);              //删除指定位置的节点
linklist list_get(linklist head, int pos);            //获取指定位置的节点数据
linklist list_locate(linklist head, data_t data);     //获取指定值的节点地址
int list_insert(linklist head, data_t data, int pos); //指定位置插入数据
void list_reverse(linklist head);                     //反转链表
void list_show(linklist head);                        //显示链表

#endif
