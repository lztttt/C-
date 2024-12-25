#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    //
    if (a > 5)
    {
        b = a * 12;
    }
    else
    {
        b = a * 10;
    }
    //
    printf("%d元\n", b);
    return 0;
}
