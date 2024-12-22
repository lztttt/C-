#include <stdio.h>
int main()
{
    int n, i, a1=1, a2=1, a3;
    scanf("%d", &n);
    if (n == 1 || n == 2)
    {
        printf("1\n");
    }
    else
    {
        for (i = 3; i<=n; i++)
        {
        a3=a1+a2;
        a1=a2;
        a2=a3;
        }
    printf("%d\n",a3);
    }
    return 0;
}