#include <stdio.h>
int main()
{
    int i, a[100], n, cache;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    cache = a[0];
    a[0] = a[n - 1];
    a[n - 1] = cache;
    for (i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
    return 0;
}