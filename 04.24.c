#include <stdio.h>
int main()
{
    int a, b, c, k, count = 0;
    scanf("%d", &k);
    for (a = 0; a <= k; a++)
    {
        for (b = 0; b <= k; b++)
        {
            for (c = 0; c <= k; c++)
            {
                if (a * 3 + b * 2 + c * 1 == 50 && a + b + c == k)
                {
                    printf("%d,%d,%d\n", a, b, c);
                    count = count + 1;
                }
            }
        }
    }
    printf("共%d种可能\n", count);
    return 0;
}