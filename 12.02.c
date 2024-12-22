#include <stdio.h>
int main()
{
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c, *max;
    scanf("%d%d%d", &a, &b, &c);
    if (*p1 > *p2)
    {
        max = p1;
    }
    else
    {
        max = p2;
    }
    if (*p3 > *max)
    {
        max = p3;
    }
    //
    printf("max=%d\n", *max);
    return 0;
}