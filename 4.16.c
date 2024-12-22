#include <stdio.h>
int main()
{
    int in,flag=0,i;
    scanf("%d", &in);
    for ( i = 2; i < in; i++)
    {
        if (in%i==0)
        {
            printf("不是素数\n");
            flag=1;
            break;
        }
        
    }
    if (flag == 0)
    {
        printf("素数\n");
    }
    return 0;
}