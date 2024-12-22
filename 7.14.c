#include <stdio.h>
int main()
{
    int a[2][3], i, j;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[0][i]);
    }
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[1][i]);
    }
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 2; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}