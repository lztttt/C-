#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i >= 0; i++)
    {
        if (i % 3 == 2 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}