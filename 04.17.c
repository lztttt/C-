#include <stdio.h>
int main()
{
    int m, flag = 0, x1, x2;
    scanf("%d", &m);
    for (x1 = 0; x1 < m; x1++)
    {
        for (x2 = 0; x2 < m; x2++)
        {
            if (x1 + x2 == m && x1 * 2 + x2 * 4 == 160)
            {
                printf("%d本漫画书,%d块钥匙扣\n", x2, x1);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("没有解决方案\n");
    }
    return 0;
}