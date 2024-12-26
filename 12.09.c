int fun(int *p1, int *p2)
{
    int max;
    max = *p1;
    if (max < *p2)
        max = *p2;
    return max;
}
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max = fun(&a, &b);
    max = fun(&max, &c);
    printf("max=%d\n", max);
    return 0;
}
