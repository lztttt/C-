#include <stdio.h>
int main()
{
    int a, b;
    for (a = 65; a <= 67; a++)
    {
        for (b = 88; b <= 90; b++)
        {
            if (a == 65 && b == 88 || a == 67 && b == 88 || a == 67 && b == 90)
            {
                continue;
            }
            else
            {
                printf("%c----%c\n", a, b);
            }
        }
    }
    return 0;
}