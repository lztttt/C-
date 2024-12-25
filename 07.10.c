#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], i, j = 0, k = 0, flag = 0;
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
            flag = 0;
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            continue;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d,", c[i]);
    }
    printf("\n");
}