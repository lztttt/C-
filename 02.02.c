#include <stdio.h>

int main()
{
    int i, p;
    scanf("%d", &i);

    if (i >= 0)
    {
        printf("%d\n", i);
    }
    if (i < 0)
    {
        p = i * -1;
        printf("%d\n", p);
    }
    return 0;
}
