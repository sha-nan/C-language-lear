// 1-100求和
#include <stdio.h>

int main(int argc, const char **argv)
{
    int i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 100);
    printf("1+2+..+%d=%d\n", i, sum);
    return 0;
}

//初始值 循环结束条件 增加
