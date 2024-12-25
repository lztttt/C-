#include <stdio.h>
int main()
{
    int n, i, j, k = 0, l, z = 'c'-1;
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        k++;
        for (j = i; j > 1; j--)
        {
            printf(" ");
        } // 空格部分
        for (j = 'a'; j < 'a' + k; j++)
        {
            printf("%c", j);
        } // 右下角部分
        z++;
        for (l = 1; l < k; l++)
        {
            printf("%c", z+l-2);
        }// 左下角部分
        if (i == 0)
        {
            break;
        }
        printf("\n");
    }
    return 0;
}