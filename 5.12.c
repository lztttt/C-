#include <stdio.h>
int main()
{
    int i, counter_letter = 0, counter_others = 0, counter_num = 0;
    char c;
    for (i = 0;; i++)
    {
        c = getchar();
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            counter_letter++;
        }
        else if (c >= '0' && c <= '9')
        {
            counter_num++;
        }
        else if (c == '\n')
        {
            break;
        }
        else
        {
            counter_others++;
        }
    }
    printf("字母数=%d,数字数=%d,其他字符数=%d\n", counter_letter, counter_num, counter_others);
    return 0;
}