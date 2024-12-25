#include <stdio.h>

int main()
{
    int m, n, i, counter = 0, a, b;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++)
    {
        a = i / 100;
        b = i % 100;
        if (b != 0 && a * 3 == b)
        { 
            counter++;
        }
    }
    printf("%d个\n", counter);
    return 0;
}