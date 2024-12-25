#include <stdio.h>
int main()
{
    int i;
    char c[100];
    gets(c);
    for (i = 0; c[i] != '\0'; i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = c[i] + 32;
        }
    }
    printf("%s\n", c);
    return 0;
}
