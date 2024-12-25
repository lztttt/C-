#include <stdio.h>
int main()
{
    int n, i, j, k;
    char c;
    scanf("%d %c", &n, &c);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i - 1; j++)
        {
            printf(" ");
        }
        for (k = n - 1 - j; k >= 0; k--)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}