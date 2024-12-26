// 已知一个排好序的数组a[ ]={1,2,3,6,8,9,12,23,33}，从键盘上输入一个数n，若数组中已经存在n，则输出不能插入，否则将n 插入到数组a中，要求插入n后的a数组元素依然有序，输出新序列。要求通过函数调用实现。该函数声明为void insert(int a[],int num,int n);其中num为数组中数的个数,n为要插入的数。
#include <stdio.h>
void insert(int a[], int num, int n); // 函数声明
int main()
{
    int n, a[10] = {1, 2, 3, 6, 8, 9, 12, 23, 33};
    scanf("%d", &n);
    insert(a, 9, n);
    return 0;
}
void insert(int a[], int num, int n)
{
    int i, j;
    for (i = 0; i < num; i++)
    {
        if (a[i] == n)
        {
            printf("不能插入\n");
            return;
        }
        if (a[i] > n)
        {
            for (j = num; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = n;
            break;
        }
        else if (i==num-1)
        {
            a[num-1] = n;
        }
        
    }
    for (i = 0; i < num + 1; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
}
