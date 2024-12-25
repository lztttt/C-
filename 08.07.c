#include <stdio.h>
int main()
{
    char s[10];
    gets(s); // 接受一个字符串
    // 前置代码
    int a[10] = {0}, i, sum = 0, j, k = 1;
    for (i = 0; s[i] != '\0'; i++)
    {
        a[i] = s[i] - '0';
    }
    for (j = i - 1; j >= 0; j--)
    {
        sum += a[j] * k;
        k *= 10;
    }
    printf("%d\n", sum*2);
    return 0;
}