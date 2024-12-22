#include <stdio.h>
int main()
{
    int i, j, a[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 9; j >= 0; j--)
    {
        printf("%d,", a[j]);
    }
    printf("\n");
}