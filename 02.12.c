#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a <= 90 & a >= 65)
    {
        printf("%c\n", a + 32);
    }
    else
    {
        printf("输入错误\n");
    }
    return 0;
}
