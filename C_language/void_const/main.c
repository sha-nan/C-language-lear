//main函数参数---argc和argv是常量指针，不能修改，但是可以访问。
#include<stdio.h>

int main(int argc, const char *argv[])
{
    //const char *argv[] = {"./a.out", "192.168.1.1", "9999"};
    int i;
    printf("argc=%d\n", argc);
    for(i=0; i<argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}
