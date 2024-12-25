int find(int a[], int num, int n)
{
    int i;
    for (i = 0; i < num; i++)
        if (a[i] == n)
            break;
    return i;
}
#include <stdio.h>
int main()
{
    int a[10] = {1, 3, 5, 9, 11, 13, 15, 19, 23, 25}, n;
    scanf("%d", &n);
    if (find(a, 10,n)==10) 
    {
        printf("没找到\n"); 
    }
    else{
        printf("%d\n", find(a, 10, n) + 1);
    }
}
