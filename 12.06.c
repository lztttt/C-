#include <stdio.h>
void fun(int *p1, int *p2); // 函数声明
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    fun(&x, &y); // 调用fun函数得到两数最大值并输出
    return 0;
}
void fun(int *p1, int *p2)
{
    if (*p1 > *p2)
        printf("%d\n", *p1);
    else
        printf("%d\n", *p2);
}
