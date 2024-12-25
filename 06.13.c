#include <stdio.h>
int main()
{
    int i, n=0, a[100], j, flag = 0, k = 0;
    for (i = 100; i <= 200; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            n++;  
            a[k] = i;
            k++;
        }
        else{
            flag=0;
        }
    }

    //
    printf("%d个\n%d,%d\n", n, a[9], a[19]);
    return 0;
}