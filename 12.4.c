#include <stdio.h>
void fun(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2; 
    *p2 = temp;
}
int main()
{
    int x, y, *px = &x, *py = &y;
    scanf("%d%d", px, py);
    fun(px, py); // 调用fun函数实现两数交换
    printf("%d,%d\n", *px, *py);
    return 0;
}