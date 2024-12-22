#include <stdio.h>
int main()
{
    int n, i, j, k, max = 0, a, b, c;
    scanf("%d", &n);
    for (i = 1; i < 20; i++)
    {
        for (j = 1; j < 20; j++)
        {
            for (k = 1; k < 20; k++)
            {
                if (i + j + k == n)
                {
                    if (i * j * k > max)
                    {
                        max = i * j * k;
                        a = i;
                        b = j;
                        c = k;
                    }
                }
            }
        }
    }
    printf("%d,%d,%d\n", a, b, c);
    return 0;
}