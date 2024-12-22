#include <stdio.h>
int main()
{
    int n, i, min = 100;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("min=%d\n", min);
    return 0;
}