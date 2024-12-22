#include <stdio.h>
int main()
{
    int m, n, a[100], i, counter = 0;
    scanf("%d %d", &m, &n);
    for (i = m; i; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            a[counter] = i;
            counter++;
        }
        if (counter == n)
        {
            break;
        }
    }
    // 
    printf("%d,%d\n", a[0], a[n - 1]); // 输出第一个闰年、第n个闰年
    return 0;
}