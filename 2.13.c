#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if ((a <= 100) & a >= 0)
    {
        printf("合法\n");
    }
    else
    {
        printf("非法\n");
    }
    return 0;
}
