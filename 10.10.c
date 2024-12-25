#include <stdio.h>
int pdprim(int n)
{
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
// 
int main()
{
    int m;
    scanf("%d", &m);
    if (pdprim(m) == 1)
        printf("素数\n");
    else
        printf("不是素数\n");
}
