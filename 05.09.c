#include <stdio.h>
int main()
{
    char in;
    int i, j;
    scanf("%c", &in);
    if (in >= 65 && in <= 90) // 大写
    {
        for (i = in + 1; i <= 90; i++)
        {
            printf("%c", i);
        }
        for (j = 65; j <= in; j++)
        {
            printf("%c", j);
        }
    }
    else if (in >= 97 && in <= 122) // 小写
    {
        for (i = in + 1; i <= 122; i++)
        {
            printf("%c", i);
        }
        for (j = 97; j <= in; j++)
        {
            printf("%c", j);
        }
    }
    printf("\n");
    return 0;
}