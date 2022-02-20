#ifndef _LINKSTACK_H_
#define _LINKSTACK_H_

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;

typedef struct node
{
    data_t data;
    struct node *next;
} listnode, *linklist;

extern linklist linkstack_create(void);
extern int linkstack_empty(linklist s);
extern int linkstack_push(linklist s,data_t data);
extern data_t linkstack_pop(linklist s);
extern data_t linkstack_top(linklist s);
extern void linkstack_clear(linklist s);
extern void linkstack_free(linklist s);

#endif
