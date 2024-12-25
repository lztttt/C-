#include <stdio.h>
int main()
{
    int m, n;
    int i, j;
    int a[200] = {0};
    int left, t;
    scanf("%d %d", &m, &n);
    for (i = 1; i <= m; i++)
        a[i] = 1;
    left = m;
    while (left > n)
    {
        t = 0;
        for (i = 1; i <= m; i++)
        {
            if (a[i] == 1)
            {
                t++;
                if (t % 2 == 1)
                {
                    a[i] = 0;
                    left--;
                    if (left == n)
                    {
                        for (j = 1; j <= m; j++)
                        {
                            if (a[j] == 1)
                            {
                                printf("%d,", j);
                            }
                        }
                        printf("\n");
                        return 0;
                    }
                }
            }
        }
    }
    for (j = 1; j <= m; j++)
    {
        if (a[j] == 1)
        {
            printf("%d,", j);
        }
    }
    printf("1\n");
    return 0;
}