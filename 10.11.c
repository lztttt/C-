#include <stdio.h>
int isprime(int m) // 函数定义
{
    int i;
    for (i = 2; i < m; i++)
        if (m % i == 0)
            break;
    if (i == m)
        return 1;
    else
        return 0;
}
//
int main()
{
    int n, i = 1, count = 0;
    scanf("%d", &n);
    while (1)
    {
        if (isprime(i))
        {
            count++;
        }
        if (count == n)
        {
            printf("%d\n", i);
            break;
        }
        i++;
    }
    return 0;
}
