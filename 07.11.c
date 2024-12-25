#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], i, j = 0, k = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
                break;
            }
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d,", c[i]);
    }
    printf("\n");
    return 0;
}