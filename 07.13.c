#include <stdio.h>
int isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++)
    {
        if (isEven(a[i]) && isEven(a[i + 1]))
        {
            a[i + 1] = a[i + 1] / 2;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
}