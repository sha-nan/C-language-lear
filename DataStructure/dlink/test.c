#include"dlist.h"

int main(int argc, char **argv)
{
    dlistnode *head = dlist_create();
    dlist_show(head);
    return 0;
}
