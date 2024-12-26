int max(int *p, int n)
{
    int maxValue = *p;
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (*(p + i) > maxValue)
        {
            maxValue = *(p + i);
            maxIndex = i;
        }
    }
    return maxIndex;
}
#include <stdio.h>
int main()
{
    int a[100], *p, n;
    scanf("%d", &n);
    for (p = a; p < a + n; p++)
        scanf("%d", p);
    int k = max(a, n);
    printf("max=%d,位于第%d个\n", a[k], k + 1);
    return 0;
}
