#include <stdio.h>
#include <string.h>
int main()
{
    char c[100], *p = c;
    gets(c); // 输入字符串
    for (p = c; p < c + 100 && *p != '\0'; p++)
    {
        if (*p >= 'A' && *p <= 'Z') // 判断小写字母
        {
            *p = *p + 32; // 转换为小写字母
        }
    }
    printf("%s\n", c); // 输出转换后的字符串
    return 0;
}
