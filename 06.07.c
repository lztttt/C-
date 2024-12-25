#include <stdio.h>
int main()
{
    int n, a[30] = {1, 1}, i;
    scanf("%d", &n);
    // 
    for (i = 2; i < 30; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }
    int counter = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
        counter = counter + 1;
        if (counter == 4)
        {
            printf("\n");   
            counter = 0;
        }
    }
    if (counter != 0)
    {
        printf("\n");
    }
}