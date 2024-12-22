#include <stdio.h>
int *fun(int *a, int *b)
{
    if (*a > *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int x, y, *max;
    scanf("%d%d", &x, &y);
    max = fun(&x, &y); // 调用fun函数得到两数最大值的地址
    printf("%d\n", *max);
    return 0;
}
