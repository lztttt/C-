#include <stdio.h>
int main()
{
    int x, y, i, cache;
    scanf("%d %d", &x, &y);
    cache = x;
    for (i = 1; i < y; i++)
    {
        cache = cache * x;
    }
    printf("%d\n", cache);
    return 0;
}