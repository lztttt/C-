// 从键盘输入一个时间长度，单位为分钟，把这个时间长度转换为小时+分钟的形式并输出
#include <stdio.h>
int main()
{
    int input, hour, min;
    scanf("%d", &input);
    hour = input / 60;
    min = input % 60;
    printf("%d分钟=%d小时%d分钟\n", input, hour, min);
    return 0;
}