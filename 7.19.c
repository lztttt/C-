#include <stdio.h>
int main()
{
    int a[100], i, min, n; // min存放最小值的下标，n存放数据个数
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]); // 输入n个数存放到a数组中
    //
    int min_index;
    min = a[0],min_index = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min_index = i;
        }
    }
    printf("%d\n", min_index);
}
