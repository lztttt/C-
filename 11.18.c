#include <stdio.h>
void del(int a[], int num, int n); // 函数声明
int main()
{
    int n, a[] = {61, 4, 26, 8, 22, 35, 7, 89, 45, 1};
    scanf("%d", &n);
    del(a, 10, n); // 函数调用
    return 0;
}
void del(int a[], int num, int n)
{
    int i, flag = 0, k, counter = 0;
    for (i = 0; i < num; i++)
    {
        if (a[i] == n)
        {
            flag = 1;
            for (k = i; k < num - 1; k++)
            {
                a[k] = a[k + 1];
            }
            counter++;
        }
    }
    if (flag == 0)
    {
        printf("不能删除\n");
        return;
    }
    for (i = 0; i < num - counter; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
}
