#include <stdio.h>

int main()
{
    int a[41], i, m, counter = 0, index = 0, amt = 41;
    scanf("%d", &m);

    // 初始化数组
    for (i = 0; i < 41; i++)
    {
        a[i] = 0;
    }

    // 当剩下的人数不是1时，继续循环
    while (amt != 1)
    {
        for (i = index;; i++) // 改为无限循环，用于处理i的循环逻辑
        {
            if (i >= 41) // 如果i超出数组范围，则重置为0
            {
                i = 0;
            }
            if (a[i] == 1) // 跳过已标记的人
            {
                continue;
            }

            counter++;
            // printf("%d,%d,%d\n", amt, counter, i);
            if (counter == m)
            {
                a[i] = 1;
                counter = 0;
                amt--;
                index = i + 1;
                if (amt == 1)
                    break;
            }
        }
    }
    for (i = 0; i < 41; i++)
    {
        if (a[i] == 0)
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    return 0;
}