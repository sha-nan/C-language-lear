#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
    int n, i;

    printf("input n(n>3):");
    scanf("%d", &n);

    i = 2;
    while (i < sqrt(n))
    {
        if (n % i == 0)
            break;
        i++;
    }
    if (i <= sqrt(n))
        printf("%d not\n", n);
    else
        printf("%d yes\n", n);

    return 0;
}
