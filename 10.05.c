#include <stdio.h>
void cost(int a)
{
    if (a <= 5)
    {
        printf("%d元\n", a * 10);
    }
    else
    {
        printf("%d元\n", a * 12);
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    cost(a);

    return 0;
}