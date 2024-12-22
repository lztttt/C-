#include <stdio.h>
int sum(int m, int n)
{
    int sum = 0, i;
    for (i = m; i < n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int s, m, n;
    scanf("%d%d", &m, &n);
    s = sum(m, n);
    printf("%d\n", s);
    return 0;
}
