#include <stdio.h>
int IsLeap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}
//
int main()
{
    int m, n, i, count = 0;
    scanf("%d%d", &m, &n);
    i = m;
    while (1)
    {
        if (IsLeap(i))
        {
            count++;
        }
        if (count == n)
        {
            printf("%d\n", i);
            break;
        }
        i++;
    }
    return 0;
}
