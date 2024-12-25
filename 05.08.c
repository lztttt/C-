#include <stdio.h>
int main()
{
    int a, b, c, total, flag = 0;
    scanf("%d,%d,%d", &a, &b, &c);
    for (total = 10; total <= 100; total++)
    {
        if (total % 3 == a && total % 5 == b & total % 7 == c)
        {
            printf("%d\n", total);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("无解\n");
    }
    return 0;
}