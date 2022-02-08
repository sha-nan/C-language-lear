//下面的程序是否有问题，若有问题，如何修改？
#include <stdio.h>
#include <string.h>

char *mystring();

int main(int argc, char *argv[])
{
    char *a;
    a=mystring();
    printf("%s\n", mystring());
    return 0;
}

char *mystring()
{
    //char str[20] = "hello world";//error
    static char str[20];
    //char * str="hello world";//字符串常量
    strcpy(str, "hello world");
    return str;
}
//1、使用strcpy要包括#include <string>
//2、将变量str放到静态区之中，使变量的周期延长到main()函数的周期之中
//或者改为字符串常量，并且初始化为"hello world"
