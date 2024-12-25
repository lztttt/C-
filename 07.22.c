#include <stdio.h>
int isprime(int n)
{
    int i;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n, i, counter = 0;
    double sum = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            sum += i;
            counter++;
        }
    }
    printf("%d个素数均值=%.2lf\n", counter, sum / counter);
}