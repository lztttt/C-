#include <stdio.h>
int main()
{
    int a, b, c, d;
    for (a = 1; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            for (c = 0; c < 10; c++)
            {
                for (d = 0; d < 10; d++)
                {
                    if ((a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d) == a * 1000 + b * 100 + c * 10 + d)
                    {
                        printf("%d\n", a * 1000 + b * 100 + c * 10 + d);
                    }
                }
            }
        }
    }
    return 0;
}