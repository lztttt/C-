#include <stdio.h>

int main()
{
    int a[100], i, max, n; // max记录最大数的值
    scanf("%d", &n);
    for (i = 0; i < n; i++) /*输入n个数并保存到数组a*/
        scanf("%d", &a[i]);
        // 
    max = a[0];       
    int max_index = 0; 
    for (i = 0; i < n; i++)
    { 
        if (a[i] > max)
        {
            max = a[i];
            max_index = i ;
        }
    }
    printf("max=%d,位于第%d个\n", max, max_index+1);
    return 0;
}