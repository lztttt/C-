// 输入10个整数，输出其中最小的m个数(m>0)，m从键盘上输入。

#include <stdio.h>
void sort_list(int *p, int n); // 排序函数声明
int main()
{
    int i, list[10], m, *p = list;
    for (i = 0; i < 10; i++) // 输入数组元素
        scanf("%d", p + i);
    scanf("%d", &m); // 输入m
    sort_list(p, 10); // 排序数组
    for (i = 0; i < m; i++) // 输出最小的m个数
        printf("%d,", *(p + i));
        printf("\n");
    return 0;
}

void sort_list(int *p, int n) // 排序函数实现
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (*(p + i) > *(p + j)) // 升序排序
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
}