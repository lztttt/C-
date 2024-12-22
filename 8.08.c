#include <stdio.h>
#include <string.h>
int main()
{
    int i, counter = 0, flag = 0;
    char str[100];
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            flag = 1;
        }
        if (str[i] == ' ' && flag == 1)
        {
            counter++;
            flag = 0;
        }
    }
    printf("%d words\n", counter + 1);
}