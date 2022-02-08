#include <stdio.h>

int main(int argc, char *argv[])
{
    float score;
    printf("please input your score: ");
    scanf("%f", &score);

    if (score < 0 || score > 100)
    {
        printf("not in [0,100]\n");
        return 0;
    }

    else
    {
        if (score >= 90)
        {
            printf("a\n");
        }
        else if (score >= 70)
        {
            printf("b\n");
        }
        else if (score >= 60)
        {
            printf("c\n");
        }
        else
        {
            printf("d\n");
        }
    }

    return 0;
}
