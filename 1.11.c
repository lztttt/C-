#include <stdio.h>
int main()
{
    int f = -1, i;
    float sum = 0;
    for (i = 1; i <= 1e5; i = i + 3)
    {
        f = -f;
        sum = sum + (1.0 / i) * f;
    }
    printf("%.5f\n", sum);
    return 0;
}
