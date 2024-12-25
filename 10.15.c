int sum(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
//
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n)); // 调用函数输出因子和
    return 0;
}
