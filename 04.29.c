#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d",&b);
    for (a = 1; a <= b; a++)
    {
        if ((b%a==0))
        {
            printf("%d,",a);
        }
        
    }
     printf("\n");
    return 0;
}