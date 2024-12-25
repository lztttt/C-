#include <stdio.h>
int main()
{
    int m, n, i, count = 0;
    scanf("%d %d", &m, &n);
    for (i = m; i; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            count = count + 1;
        }
        if (count == n)
        {
            printf("%d\n", i);
            break;
        }
    }
}
