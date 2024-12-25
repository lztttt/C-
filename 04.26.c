#include <stdio.h>
int main()
{
    char j;
    int i = 0;
    for (j = 'A'; j <= 'D'; j++)
    {
        if (j != 'A')
            i++;
        if (j == 'c')
            i++;
        if (j == 'D')
            i++;
        if (j != 'D')
            i++;
        if (i == 1)
        {
            printf("%c\n", j);
        }
    }
    return 0;
}