#include <stdio.h>
int main()
{
    int i, a[10];
    float sum = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("均值=%.1f\n", sum / 10);
    for (i = 0; i < 10; i++)
    {
        if (a[i] >= sum/10)
        {
            printf("%d,", a[i]);
        }
    }

    printf("\n");
}