#include <stdio.h>
int main()
{
    int a[100], n, *p, *max;
    scanf("%d", &n);
    for (p = a; p < a + n; p++) // 从键盘输入n个数
        scanf("%d", p);
    max = a;
    for (p = a + 1; p < a + n; p++)
    {
        if (*p > *max)
        {
            max = p;
        }
    }
    printf("max=%d\n", *max);
    return 0;
}