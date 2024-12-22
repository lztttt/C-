#include <stdio.h>
int main()
{
    int a[3][4], i, j, max, x, y;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("max=%d\n", max);
    printf("row=%d,colum=%d\n", x+1, y+1);
}