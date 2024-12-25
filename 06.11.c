#include <stdio.h>
int main()
{
    int a[10] = {1, 3, 5, 9, 11, 13, 15, 19, 23, 25}; // 数组初始化
    //
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    if (i == 10)
    {
        printf("无此数\n");
    }
    return 0;
}