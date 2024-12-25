#include <stdio.h>
int main()
{
    int in, i, flag = 0, count = 0;
    for (in = 100; in <= 200; in++)
    {
        for (i = 2; i < in; i++)
        {
            if (in % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count = count + 1;
        }
        flag = 0;
    }
    printf("%d个\n", count);
    return 0;
}