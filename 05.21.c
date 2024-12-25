#include <stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    if (x >= 0)
    {
        printf("%.2lf\n", (x * x * 3) + 10);
    }
    else
    {
        printf("%.2lf\n", 2 * x + 7);
    }
}