#include <stdio.h>
int main()
{
    int n, i, a1 = 1, a2 = 1, a3, counter = 2;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1\n");
    }
    else if (n == 2)
    {
        printf("1,1,\n");
    }

    else
    {
        printf("1,1,");
        for (i = 3; i <= n; i++)
        {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
            printf("%d,", a3);
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
    return 0;
}