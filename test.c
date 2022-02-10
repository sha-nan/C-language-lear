#include <stdio.h>

int fun(char *s)
{
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ' && s[i + 1] == ' ') 
        {
            j++;
        }
    }
    j++;
    return j;
}

int main()
{
    char s[50] = "hello world six five";
    printf("单词个数：%d\n", fun(s));
    return 0;
}

int list_order_insert(linklist h,data_t data)
{
    linklist p;
    p = (linklist)malloc(sizeof(linknode));
    if(p== NULL)
    {
        printf("malloc error!\n");
        return -1;
    }
    p->data = data;
    linklist q = h;
    while(q->next!=NULL&&q->next->data< data)
    {
        q = q->next;
    }
    p -> next = q->next;
    q->next = p;//插入
}
