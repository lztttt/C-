int sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
//
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n)); // 调用函数输出各位数之和
    return 0;
}
