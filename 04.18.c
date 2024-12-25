#include <stdio.h>
int main()
{
    int i, j, k, count = 0;
    for (i = 0; i <= 20; i++)
    {
        for (j = 0; j <= 10; j++)
        {
            for (k = 0; k <= 5; k++)
            {

                if (i * 5 + j * 10 + k * 20 == 100)
                {
                    count = count + 1;
                }
            }
        }
    }
    printf("%d种\n", count);
    return 0;
}