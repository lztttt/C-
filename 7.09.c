#include <stdio.h>

int main()
{
    int a[100], i, min_index = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    min_index = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] < a[min_index])
        {
            min_index = i;
        }
    }
    if (min_index == 9)
    {
        printf("%d,%d\n", a[8], a[0]);
    }
    else if (min_index == 0)
    {
        printf("%d,%d\n", a[9], a[1]);
    }
    else
    {
        printf("%d,%d\n", a[min_index - 1], a[min_index + 1]);
    }
    return 0;
}