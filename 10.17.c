#include <stdio.h>
int isPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0 && isPrime(i))
        {
            printf("%d,", i);
        }
    }
    printf("\n");
}