#include <stdio.h>
int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    //
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d,", a[i]);
        }
    }
    printf("\n");
    return 0;
}
