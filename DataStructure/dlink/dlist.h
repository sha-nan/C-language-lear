#ifndef __DLIST_H__
#define __DLIST_H__

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;
typedef struct node
{
    data_t data;       //数据域
    struct node *next; //指向下一个节点
    struct node *prev; //指向上一个节点
} dlistnode;

dlistnode *dlist_create(void);                           //创建一个空的双向链表
void dlist_show(dlistnode *head);                        //打印双向链表
dlistnode *dlist_get(dlistnode *head, int pos);          //获取第pos个节点
int dlist_insert(dlistnode *head, data_t data, int pos); //插入节点
int dlist_delete(dlistnode *head, int pos);              //删除节点
#endif
