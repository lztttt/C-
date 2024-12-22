#include <stdio.h>
double power(double a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int k;
    double sum = a;
    for (k = 1; k < b; k++)
    {
        sum = sum * a;
    }
    return sum;
} // 乘方
int main()
{
    int i;
    double x, result = 0.0;
    scanf("%lf", &x);
    for (i = 1; i < 11; i++)
    {
        result = result + (power(x, i) / i) * power(-1.0, i+1);
        // printf("%d,%lf,%lf\n", i, power(x, i), power(-1.0, i));
    }
    printf("%.4lf\n", result);
    return 0;
}