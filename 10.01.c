#include <stdio.h>
float fun(int a, int b)
{
    return 3.5 * a + 4.2 * b;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%.1f元\n", fun(a, b));
    return 0;
}