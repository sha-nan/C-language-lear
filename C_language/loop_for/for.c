#include <stdio.h>

int main(int argc, char **argv)
{
    int i,sum;
    sum = 0;

    for(i = 1; i < 100; i++)
    {
        sum += i;
    }
    printf("sum=%d\n",sum);
    return 0;
}
