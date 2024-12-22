#include <stdio.h>
int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b, *max;
    scanf("%d%d", &a, &b);
    if (*p1 > *p2)
    {
        max = p1;
    }
    else
    {
        max = p2;
    }
    //
    printf("%d\n", *max);
    return 0;
}