#include <stdio.h>
int cost(int a)
{
    if (a >= 5)
    {
        return a * 12;
    }
    else
    {
        return a * 10;
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d元\n", cost(a));
    return 0;
}