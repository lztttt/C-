// 二分法求方程x4-6x3+3x2-10x+2=0在[a,b]区间的根，a、b从键盘上输入，精度要求为1e-3。
// 编程可能涉及数学函数的使用，fabs()函数功能：求实数绝对值
#include <stdio.h>
#include <math.h>
double f(double x)
{
    return (x * x * x * x) - 6 * (x * x * x) + 3 * x * x - (10 * x) + 2;
}
double bisection(double a, double b)
{
    double mid;
    while (fabs(a - b) > 1e-3)
    {
        mid = (a + b) / 2.0; // 计算中点
        if (f(mid) == 0.0)
        { // 找到根
            return mid;
        }
        else if (f(mid) * f(a) < 0)
        { // 根在 [a, mid] 区间
            b = mid;
        }
        else
        { // 根在 [mid, b] 区间
            a = mid;
        }
    }
    return a;
}
int main()
{
    double a, b, root;
    // 从键盘输入区间 [a, b]
    scanf("%lf %lf", &a, &b);
    if (f(a) * f(b) >= 0)
    {
        printf("该区间无根\n");
        return 1;
    }
    // 调用二分法
    root = bisection(a, b);
    printf("x=%.5lf\n", root);
    return 0;
}
