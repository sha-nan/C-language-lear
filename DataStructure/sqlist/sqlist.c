#include <stdio.h>
#include <stdlib.h> //使用malloc()
#include <string.h> //使用memset()
#include "sqlist.h"

/*
 *函数名称：list_create
 *函数功能：创建线性表
 *函数参数：无
 *函数返回值：线性表的头指针
 */
sqlink list_create()
{
    // 1.申请空间
    sqlink L;
    L = (sqlink)malloc(sizeof(sqlist));
    if (L == NULL)
    {
        printf("list malloc error!\n");
        return NULL; // L==NULL
    }
    // 2.初始化
    memset(L, 0, sizeof(sqlist));
    L->last = -1;
    // 3.返回首地址
    return L;
}

/*
 * 函数名称：list_clear
 * 函数功能：清空线性表L
 * 函数参数：L：顺序表的首地址
 * 函数返回值：成功返回0，失败返回-1
 */
int list_clear(sqlink L)
{
    if (L == NULL)
    {
        printf("list is NULL!\n");
        return -1;
    }
    memset(L, 0, sizeof(sqlist));
    L->last = -1;
    return 0;
}

/*
 * 函数名称：list_free
 * 函数功能：销毁线性表L
 * 函数参数：L：顺序表的首地址
 * 函数返回值：成功返回0，失败返回-1
 */
int list_free(sqlink L)
{
    if (L == NULL)
    {
        printf("list is NULL!\n");
        return -1;
    }
    free(L); //释放空间
    L = NULL;
    return 0;
}
/*
 * 函数名称：list_empty
 * 函数功能：判断线性表是否为空
 * 函数参数：L：顺序表的首地址
 * 函数返回值：空返回1，非空返回0
 */
int list_empty(sqlink L)
{
    if (L == NULL)
    {
        printf("list is NULL!\n");
        return -1;
    }
    if (L->last == -1)
    {
        return 1;
    }
    return 0;
}

/*
 * 函数名称：list_length
 * 函数功能：获取线性表的长度
 * 函数参数：L：顺序表的首地址
 * 函数返回值：线性表的长度
 */
int list_length(sqlink L)
{
    if (L == NULL)
    {
        printf("list is NULL!\n");
        return -1;
    }
    return L->last + 1;
}
/*
 * 函数名称：list_locate
 * 函数功能：查找线性表中某元素的位置
 * 函数参数：L：顺序表的首地址；value：待查找的元素
 * 函数返回值：查找成功返回元素的位置，查找失败返回-1
 */
int list_locate(sqlink L, int value)
{
    if (L == NULL)
    {
        printf("list is NULL!\n");
        return -1;
    }
    for (int i = 0; i <= L->last; i++)
    {
        if (L->data[i] == value)
        {
            return i;//返回元素的位置
        }
    }
    return -1;
}
/*
 *函数名称：list_insert
 *函数功能：在第i个位置插入元素
 *函数参数：L：顺序表的首地址；value：插入的元素；pos：插入的位置
 *函数返回值：成功返回0，失败返回-1
 */
int list_insert(sqlink L, data_type value, int pos)
{
    if (L == NULL) //顺序表为空
    {
        printf("list is NULL!\n");
        return -1;
    }
    if (pos < 0 || pos > L->last + 1) //插入位置不合法
    {
        printf("pos is error!\n");
        return -1;
    }
    if (L->last == MAXSIZE - 1) //顺序表已满
    {
        printf("list is full!\n");
        return -1;
    }
    // 1.插入位置后面的元素后移
    for (int i = L->last; i >= pos; i--)
    {
        L->data[i + 1] = L->data[i];
    }
    // 2.插入元素
    L->data[pos] = value;
    // 3.更新last
    L->last++;
    return 0;
}

/*
 *函数名称：list_show
 *函数功能：显示线性表
 *函数参数：L：顺序表的首地址
 *函数返回值：无
 */
int list_show(sqlink L)
{
    if (L == NULL)
    {
        printf("list is NULL!\n");
        return -1;
    }
    if (L->last == -1)
    {
        printf("list is empty!\n");
        return -1;
    }
    for (int i = 0; i <= L->last; i++)
    {
        printf("%d ", L->data[i]);
    }
    printf("\n");
    return 0;
}

/*
 *函数名称：list_delete
 *函数功能：删除第i个位置的元素
 *函数参数：L：顺序表的首地址；pos：删除的位置
 *函数返回值：成功返回0，失败返回-1
 */
int list_delete(sqlink L, int pos)
{
    if (L == NULL) //顺序表为空
    {
        printf("list is NULL!\n");
        return -1;
    }
    if (L->last == -1)
    {
        printf("list is empty!\n");
        return -1;
    }
    if (pos < 0 || pos > L->last) //检查参数合法性
    {
        printf("delete pos is error!\n");
        return -1;
    }
    // 1.删除位置后面的元素前移
    for (int i = pos; i < L->last; i++)
    {
        L->data[i] = L->data[i + 1]; //元素往前移动
    }
    // 2.更新last
    L->last--; //删除一个元素，last--
    return 0;
}

/*
 *函数名称：list_merge
 *函数功能：合并两个顺序表
 *函数参数：L1：顺序表1的首地址；L2：顺序表2的首地址
 *函数返回值：成功返回0，失败返回-1
 */
int list_merge(sqlink L1, sqlink L2)
{
    int ret;
    if (L1 == NULL || L2 == NULL)
    {
        printf("list is NULL!\n");
        return -1;
    }
    if (L1->last + L2->last + 1 > MAXSIZE)
    {
        printf("list is full!\n");
        return -1;
    }

    for (int i = 0; i <= L2->last; i++)
    {
        ret = list_locate(L1, L2->data[i]);
        if (ret == -1)
        {
            if(list_insert(L1, L2->data[i], L1->last + 1)==-1)
            {
                return -1;
            }
        }
        
    }
    return 0;
}

/*
 *函数名称：list_purge
 *函数功能：删除线性表中的重复元素
 *函数参数：L：顺序表的首地址
 *函数返回值：成功返回0，失败返回-1
 */
int list_purge(sqlink L) //删除重复元素
{
    if (L == NULL)
    {
        printf("list is NULL!\n");
        return -1;
    }
    if (L->last == -1)
    {
        printf("list is empty!\n");
        return -1;
    }
    for (int i = 0; i < L->last; i++)
    {
        for (int j = i + 1; j <= L->last; j++)
        {
            if (L->data[i] == L->data[j])
            {
                list_delete(L, j);
                j--;
            }
        }
    }
    return 0;
}
