double fd(double x)
{
    if (x < -10)
    {
        return x * x * 5;
    }
    else if (x > 20)
    {
        return 3 * x + 8;
    }
    else
    {
        return x * x + 1;
    }
}
//
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    printf("%.2f\n", fd(x));
    return 0;
}
