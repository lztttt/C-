#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], x;
    int i, counter = 0;
    gets(str);
    scanf("%c", &x);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == x)
        {
            counter++;
        }
    }
    printf("%d次\n", counter);
}