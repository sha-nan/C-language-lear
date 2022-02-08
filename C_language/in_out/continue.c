#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    for (n = 100; n < 110; n++)
    {
        if (n % 3 == 0)
            break;
        // continue;
        printf("%d\n", n);
    }
    return 0;
}
