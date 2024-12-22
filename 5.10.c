#include <stdio.h>
int main()
{
    char in;
    int i;
    for (i = 0; i < 15; i++)
    {
        scanf(" %c", &in);
        printf("%c\n", in-32);
    }
    return 0;
}