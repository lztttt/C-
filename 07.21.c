#include <stdio.h>
int main()
{
    double n, y;
    scanf("%lf", &n);
    if (n <= 2880)
    {
        y = 0.48 * n;
    }
    else if (n <= 4800)
    {
        y = 0.48 * 2880 + 0.53 * (n - 2880);
    }
    else
    {
        y = 0.48 * 2880 + 0.53 * (4800 - 2880) + 0.78 * (n - 4800);
    }
    printf("%.2lf\n", y);
    return 0;
}