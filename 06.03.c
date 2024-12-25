#include <stdio.h>
int main()
{
    int a[100], i, max, n; // max记录最大数的值
    scanf("%d", &n);
    for (i = 0; i < n; i++){ /*输入n个数并保存到数组a*/
        scanf("%d", &a[i]);
    //  前置代码----------------
    
    max=0;
    for ( i = 0; i < n; i++)
    {
        if (a[i]>=max)
        {
            max=a[i];
        }
    }
    printf("max=%d\n",max);
}