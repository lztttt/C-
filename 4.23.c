#include <stdio.h>
int main()
{
    int a, b;
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            if ((a * 100 + b * 10 + 67008) % 78 == 0 && (a * 100 + b * 10 + 67008) % 67 == 0)
            {
                printf("%d\n", (a * 100 + b * 10 + 67008));
                break;
            }
        }
    }
    return 0;
}