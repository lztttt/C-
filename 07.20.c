#include <stdio.h>
int figure(int x)
{
    int figure = 0, n1 = x;
    while (n1 > 0)
    {
        n1 = n1 / 10;
        figure++;
    }
    return figure;
}
int main()
{
    int m, n, i, counter = 0, a[10], j, fig, temp;
    scanf("%d,%d", &n, &m);
    for (j = 1; j <= n; j++)
    {
        temp = j;
        fig = figure(j);
        for (i = 0; i < fig; i++)
        {
            a[i] = temp % 10;
            temp = temp / 10;
        }
        for (i = 0; i < fig; i++)
        {
            if (a[i] == m)
            {
                counter++;
            }
        }
        // printf("%d,%d,%d\n", j, fig, counter);
    }
    printf("%d\n", counter);
    return 0;
}