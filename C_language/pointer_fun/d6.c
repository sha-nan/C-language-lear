//编写递归函数，计算斐波那契数列(求第n项)
#include <stdio.h>

int fibonacci(int n);

int main(int argc, char* argv[])
{
    int n = 1;
    int count = 0;
    printf("please input n:");
    scanf("%d", &count);
    while (n<=count)
    {
        printf("%d ", fibonacci(n));
        n++;
    }
    printf("\n");
    return 0;
}

int fibonacci(int n)
{
    if (n == 1 || n == 2)//前两项
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);//前n-1项+前n-2项
}
