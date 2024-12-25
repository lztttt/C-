#include <stdio.h>
int max(int a[], int n)
{
    int i, k = 0;
    for (i = 1; i < n; i++)
        if (a[k] < a[i])
            k = i;
    return k; // 返回最大值的下标
}
int main()
{
    int a[100], n, i, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("max=%d,位于第%d个\n", a[max(a, n)], max(a, n) + 1);
    return 0;
}