#include <stdio.h>
int main()
{
    int i, weight[11] = {5, 6, 7, 3, 4, 4, 8, 8, 10, 6, 9}, s[11], weight_sum = 0;
    double weighted_sum = 0;
    for (i = 0; i < 11; i++)
    {
        scanf("%d", &s[i]);
    }
    for (i = 0; i < 11; i++)
    {
        weight_sum = weight_sum + weight[i];
    }
    for (i = 0; i < 11; i++)
    {
        weighted_sum = weighted_sum + (s[i] * weight[i]);
    }
    printf("%.2lf\n", weighted_sum / weight_sum);
    return 0;
}