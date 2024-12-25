#include <stdio.h>
int main()
{
    int a, b, i, max = 0, temp;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (i = 1; i <= a; i++)
    {
        if ((b % i == 0) && (a % i == 0) && i > max)
        {
            max = i;
        }
    }
    printf("%d\n", max);
    return 0;
}
