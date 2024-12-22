#include <stdio.h>
int sum_factor(int a)
{
    int i, sum = 0;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int m, n, k;
    scanf("%d", &k);
    for (m = 1; m < k; m++)
    {
        n = sum_factor(m);
        if (sum_factor(n) == m && m != n&&m< n)
        {
            printf("%d,%d\n", m, n);
        }
    }
}