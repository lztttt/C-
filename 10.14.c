double fun(int n)
{
    double sum = 0.0, a = 2.0, b = 1.0;
    int count = 0, cache;
    while (1)
    {
        sum += a / b;
        cache = a;
        a = a + b;
        b = cache;
        count++;
        if (count == n)
        {
            return sum;
        }
    }
}
//
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%.5f\n", fun(n)); // 调用fun函数计算多项式之和
    return 0;
}
