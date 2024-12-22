#include <stdio.h>
int main()
{
    int a, b, c;
    for (a = 0; a <= 20; a++)
    {
        for (b = 0; b <= 33; b++)
        {
            for (c = 0; c <= 100; c++)
            {
                // printf("%d,%d,%d\n", a, b, c);
                if (a * 15 + b * 9 + c * 1 == 300 && a + b + c == 100)
                {
                    printf("%d,%d,%d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}