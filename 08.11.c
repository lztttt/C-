#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int len, i, flag = 0;
    gets(s);
    len = strlen(s);
    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("是\n");
    }
    else
    {
        printf("不是\n");
    }
    return 0;
}