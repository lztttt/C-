#include <stdio.h>
int main()
{
    char num;
    int counter = 0, i;
    for (i = 0; i >= 0; i++)
    {
        num = getchar();
        if (num >= '0' && num <= '9')
        {
            counter = counter + 1;
        }
        if (num == '\n')
        {
            break;
        }
    }
    printf("%d位数\n", counter);
    return 0;
}