#include <stdio.h>
int main()
{
    int x, result = 0;
    scanf("%d", &x);
    while (x != 0)
    {
        result = result * 10 + x % 10;
        x = x / 10;
    }
    printf("%d\n", result);
    return 0;
}