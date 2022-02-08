#include <stdio.h>

int main(int argc, char **argv)
{
    float score = 0;

    printf("please input score:");
    scanf("%f", &score);
    if (!(score >= 0 && score <= 100))
        printf("not in [0,100]\n");
    else
    {
        switch ((int)score / 10)
        {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
        case 7:
            printf("B\n");
            break;
        case 6:
            printf("C\n");
            break;
        default:
            printf("D\n");
        }
    }
    return 0;
}
