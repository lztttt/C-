#include <stdio.h>
int main()
{
    int n, a[10] = {1, 3, 5, 9, 11, 13, 15, 19, 23, 25}, i;
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            printf("%d\n", i + 1);
        }
    }
    if (i==10)
    {
        printf("没找到\n");
    }
    
    return 0;
}