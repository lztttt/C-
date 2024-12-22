#include <stdio.h>
int main()
{
    int a[10], i, cache, max, min;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    } // 输入
    max = a[0];
    min = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
        if (a[i] < a[min])
        {
            min = i;
        }
    }
    cache = a[0];
    a[0] = a[min];
    a[min] = cache;
    cache = a[9];
    a[9] = a[max];
    a[max] = cache;
    for (i = 0; i < 10; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
    return 0;
}