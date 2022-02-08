#include <stdio.h>

double power(double x, int n);

int main(int argc, char **argv)
{
    double x, ret;
    int n;
    printf("input:");
    scanf("%lf%d", &x, &n);

    ret = power(x, n);

    printf("%lf^%d=%lf\n", x, n, ret);
}

double power(double x, int n)
{
    double result = 1;
    if (0 == n)
        return 1;
    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}
