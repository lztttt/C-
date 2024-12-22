#include <stdio.h>
int main()
{
    int yuan, c = 0, i, j, k;
    scanf("%d", &yuan);
    for (i = 0; i <= 40; i++)
    {
        for (j = 0; j <= 40; j++)
        {
            for (k = 0; k <= 40; k++)
            {
                if (i + j + k == 40 && i * 10 + j * 5 + k == 10 * yuan)
                {
                    c = c + 1;
                }
            }
        }
    }
    printf("%d种\n", c);
}