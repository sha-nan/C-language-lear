#ifndef _SQLIST_H_
#define _SQLIST_H_
typedef int data_type;//定义数据类型
#define MAXSIZE 128//定义顺序表的最大长度

/*
struct sqlist_t
{
    data_type data[MAXSIZE];
    int last;
};

typedef struct sqlist_t sqlist; // sqlist L;struct sqlist_t L;
typedef struct sqlist_t *sqlink;//struct sqlist_t *p;sqlink p;
*/

typedef struct
{
    data_type data[MAXSIZE];
    int last;//最后一个元素的下标
} sqlist, *sqlink;

sqlink list_create();//创建顺序表，返回顺序表的首地址
int list_clear(sqlink L);//清空顺序表，返回0表示成功，返回-1表示失败
int list_free(sqlink L);//删除顺序表，返回0表示成功，返回-1表示失败
int list_empty(sqlink L);//判断顺序表是否为空，返回1为空，0为非空
int list_length(sqlink L);//顺序表长度，返回元素个数
int list_get(sqlink L, int i, data_type *pos);//获取第i个元素
int list_locate(sqlink L, data_type value);//查找元素的位置，返回下标
int list_insert(sqlink L, data_type value, int pos);//在第pos个位置插入元素
int list_delete(sqlink L, int pos);//删除第pos个元素
int list_merge(sqlink L1, sqlink L2);//合并两个顺序表
int list_purge(sqlink L);//删除重复元素
int list_show(sqlink L);//显示顺序表

#endif
