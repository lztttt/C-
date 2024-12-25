#include <stdio.h>
int main()
{
    int i, n, mid = 2;
    double sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (1.0 / mid);
        mid = mid + 2;
    }
    printf("%.2lf\n", sum);
}