#include <stdio.h>

int main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},y,m;
    scanf("%d %d",&y,&m);
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        a[1]=29;
        printf("%d天\n",a[m-1]);
    }
    else{
        printf("%d天\n",a[m-1]);
    }
    return 0;
}