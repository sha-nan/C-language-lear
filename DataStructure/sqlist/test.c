#include <stdio.h>
#include "sqlist.h"

void test_insert(sqlink L);
void test_delete(sqlink L, int pos);
void test_show(sqlink L);
void test_merge(sqlink L1, sqlink L2);
void test_purge(sqlink L);
int main(int argc, char **argv)
{
    sqlink L1, L2;

    L1 = list_create();
    L2 = list_create();
    if (L1 == NULL || L2 == NULL)
    {
        printf("list create error!\n");
        return -1;
    }

    list_insert(L1, 10, 0);
    list_insert(L1, 10, 0);
    list_insert(L1, 10, 0);
    list_insert(L1, 10, 0);
    list_insert(L1, 10, 0);
    list_insert(L1, 10, 0);
    list_insert(L1, 10, 0);
    list_show(L1);

    printf("\n");
    test_purge(L1);
    list_free(L1);
    list_free(L2);
    return 0;
}

void test_insert(sqlink L)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        list_insert(L, i, i);
    }
}

void test_delete(sqlink L, int pos)
{
    list_delete(L, pos);
}

void test_merge(sqlink L1, sqlink L2)
{
    list_merge(L1, L2);
    list_show(L1);
}

void test_purge(sqlink L)
{
    list_purge(L);
    list_show(L);
}
