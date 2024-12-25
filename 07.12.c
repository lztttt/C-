#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], i, j = 0, k, lenth_c = 0, flag = 0, lenth_a = 10, lenth_b = 10;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    } // 输入a,b
    for (i = 0; i < lenth_a; i++)
    {
        for (j = i + 1; j < lenth_a; j++)
        {
            if (a[i] == a[j])
            {
                lenth_a = lenth_a - 1;
                for (k = j; k < lenth_a; k++)
                {
                    a[k] = a[k + 1];
                }
                j--;
                break;
            }
        }
    } // 输入去重a
    for (i = 0; i < lenth_b; i++)
    {
        for (j = i + 1; j < lenth_b; j++)
        {
            if (b[i] == b[j])
            {
                lenth_b = lenth_b - 1;
                for (k = j; k < lenth_b; k++)
                {
                    b[k] = b[k + 1];
                }
                j--;
                break;
            }
        }
    } // 输入去重b
    // for (i = 0; i < lenth_a; i++)
    // {
    //     printf("%d,", a[i]);
    // }
    // printf("\n");
    // for (i = 0; i < lenth_b; i++)
    // {
    //     printf("%d,", b[i]);
    // }
    for (i = 0; i < lenth_b; i++)
    {
        for (j = 0; j < lenth_a; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        // printf("%d,%d,%d,%d\n", j, b[i], a[j], flag);
        if (flag == 0)
        {
            c[lenth_c] = b[i];
            lenth_c++;
        }
        flag = 0;
    } // 判断
    for (i = 0; i < lenth_a; i++)
    {
        printf("%d,", a[i]);
    }
    for (i = 0; i < lenth_c; i++)
    {
        printf("%d,", c[i]);
    } // 输出
    printf("\n");
    return 0;
}