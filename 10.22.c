#include <stdio.h>
void show(int n, char ch)
{
    int i, j, k, l;
    for (i = n; i > 0; i--)
    {
        k++;
        for (j = i; j > 1; j--)
        {
            printf(" ");
        } // 空格部分
        for (j = 0; j < k; j++)
        {
            printf("%c", ch);
        } // 右下角部分
        for (l = 1; l < k; l++)
        {
            printf("%c", ch);
        }
        if (i == 0)
        {
            break;
        }
        printf("\n");
    }
    return 0;
}
// 
int main()
{
    int n;
    char ch;
    scanf("%d%c", &n, &ch);
    show(n, ch);
    return 0;
}