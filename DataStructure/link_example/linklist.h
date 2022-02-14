#ifndef __LINKLIST_H_
#define __LINKLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;

typedef struct node
{
    int data;
    struct node *next;
} listnode, *linklist;

linklist list_create(void);    //创建链表
void list_show(linklist head); //遍历链表
void list_jose(linklist head,int k,int m); //Joseph问题

#endif
