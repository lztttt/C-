#include <stdio.h>
int main()
{
    int in, a, count = 0, i;
    for (i = 100; i <= 200; i++)
    {
        for ( a= 2; a < i; a++)
        {
            if (i % a == 0)
            {
                count = count + 1;
            }
        }
    }
    printf("%\n", count);
    return 0;
}