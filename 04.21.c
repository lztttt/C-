#include <stdio.h>
int main()
{
    int a, b;
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            if ((30 + a) * 6237 == (b * 10 + 3) * 3564)
            {
                printf("%d,%d\n", a, b);
            }
        }
    }
    return 0;
}