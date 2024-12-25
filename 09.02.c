#include <stdio.h>
int main()
{
    int n, i, j, k = 0, l;
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        k++;
        for (j = i; j > 1; j--)
        {
            printf(" ");
        } // 空格部分
        for (j = 0; j < k; j++)
        {
            printf("*");
        } // 右下角部分
        for (l = 1; l < k; l++)
        {
            printf("*");
        }
        if (i == 0)
        {
            break;
        }
        printf("\n");
    }
    return 0;
}