#include <stdio.h>
int main()
{
    int n, a[100], i, j, k, cache;
    double sum;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    } // 输入
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n-1; i++)
        {
            if (a[i] > a[i+1])
            {
                cache = a[i];
                a[i] = a[i + 1];
                a[i + 1] = cache;
            }
        }

    } // 冒泡排序
    for (k = 1; k < n - 1; k++)
    {
        sum = sum + a[k];
    }
    printf("%.2lf\n", (sum / (n - 2)));
    return 0;
}