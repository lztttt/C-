// 从键盘依次输入10个整数，按输入顺序进行逆序输出。要求使用指针
#include <stdio.h>
int main()
{
    int a[10], *p;
    for (p = a; p < a + 10; p++)
        scanf("%d", p);
    for (p = a + 9; p >= a; p--)
    {
        printf("%d,", *p);
    }
    printf("\n");
    return 0;
}