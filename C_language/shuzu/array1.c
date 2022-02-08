#include <stdio.h>

int main(int argc, char **argv)
{
    int a[6];

    for (int i = 0; i < 6; i++)
    {
        printf("%p\n", &a[i]);
    }
}
