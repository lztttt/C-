#include <stdio.h>
void fun(int a, int b)
{
    printf("%.1f元\n", 3.5 * a + 4.2 * b);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    // 
    fun(a, b);
    return 0;
}