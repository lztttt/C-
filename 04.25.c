#include <stdio.h>
int main()
{
    int l, a, b, amt_a, amt_b, min_a, min_b, left_min;
    scanf("%d %d %d", &l, &a, &b);
    left_min = l;
    for (amt_a = 0; amt_a <= l / a; amt_a++)
    {
        for (amt_b = 0; amt_b <= l / b; amt_b++)
        {
            if (l - amt_a * a - amt_b * b <= left_min && l - amt_a * a - amt_b * b >= 0)
            {
                left_min = l - amt_a * a - amt_b * b;
                min_a = amt_a;
                min_b = amt_b;
            }
        }
    }
    printf("%d,%d,%d\n", min_a, min_b, left_min);
    return 0;
}