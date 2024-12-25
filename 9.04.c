#include <stdio.h>
int main()
{
    int n, k, i;
    scanf("%d%d", &n, &k); 
    for (i = 1; i < k; i++)
    {
        n = (n / 2) - 1;
    }
    printf("%d\n", n);
    return 0;
}