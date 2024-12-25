#include <stdio.h>
int main()
{
    int n, a[100] = {1, 2, 3, 6, 8, 9, 12, 23, 33}, i, j, k, flag = 0;
    scanf("%d", &n);
    for (i = 0; i <=9; i++)
    {
        if (a[i] == n&&n!=0)
        {
            printf("不能插入\n");
            return 0;
        }
    }//判断是否存在重复
    for (j = 0; j < 9; j++)
    {
        if (n==0)
        {
            for (k = 9; k > 0; k--)
            {
                a[k] = a[k - 1];
            }
            a[0] = n;
            flag = 1;
            break;
        }//特殊情况1
        if (n>a[8])
        {
            a[9]=n;
            flag=1;
            break;
        }//特殊情况2
        
        else if (n > a[j] && n < a[j + 1])
        {
            for (k = 9; k > j; k--)
            {
                a[k] = a[k - 1];
            }
            a[j + 1] = n;
            flag = 1;
            break;
        }
    }
  
    if (flag == 0)
    {
        printf("不能插入\n");
    }
    else
    {
        for (i = 0; i <= 9; i++)
        {
            printf("%d,", a[i]);
        }
        printf("\n");
        return 0;
    }
}