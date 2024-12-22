#include <stdio.h>
int main()
{
    int m, n, x1, x2, flag = 0;
    scanf("%d%d", &m, &n);
    for (x1 = 0; x1 <= m; x1++)
    {
        for (x2 = 0; x2 <= m; x2++)
        {
            // printf("鸡=%d,兔=%d,共%d只,脚%d\n", x1, x2,(x1 + x2),((x1 * 2) + (x2 * 4)));
            if (((x1 * 2) + (x2 * 4)) == n && (x1 + x2) == m)
            {
                printf("鸡=%d,兔=%d\n", x1, x2);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("无此结果\n");
    }
    return 0;
}