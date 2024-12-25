#include <stdio.h>
int main()
{
    int n, a[10] = {61, 4, 26, 8, 22, 35, 7, 89, 45, 1}, i, j, k;
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            for (j = i; j < 9; j++)
            {
                a[j] = a[j + 1];
            }
            for (k = 0; k < 9; k++)
            {
                printf("%d,", a[k]);
            }
            printf("\n");
            break;
        }
    }
    if (i == 10)
    {
        printf("不能删除\n");
    }
    return 0;
}