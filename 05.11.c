#include <stdio.h>
int main()
{
    int a, b, i, j = 0, c = 1, total = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        j = j + a * c;
        c = c * 10;
        total = total + j;
        // printf("%d\t%d\n", j, total);
    }
    printf("%d\n", total);
    return 0;
}