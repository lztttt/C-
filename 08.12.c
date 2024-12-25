#include <stdio.h>
int main()
{
    char s[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    // 前置代码
    int i;
    scanf("%d", &i);
    if (i <= 12 && i >= 1)
    {
        printf("%s\n", s[i - 1]);
    }
    else
    {
        printf("输入错误\n");
    }
    return 0;
}