#include <stdio.h>
int main()
{
    int a[8], i, flag = 0;
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 8; i++)
    {
        if (a[i] == 13)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("找到\n");
    }
    else
    {
        printf("没找到\n");
    }

    return 0;
}