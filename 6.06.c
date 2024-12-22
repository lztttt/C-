#include<stdio.h>   
int main()   
{  
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},y,m,d;     
    scanf("%d%d%d",&y,&m,&d);  
    // 
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        a[1]=29;
    }
    int i,sum=0;
    for ( i = 0; i < m-1; i++)
    {
        sum=sum+a[i];
    }
    printf("第%d天\n",sum+d);
    return 0;
}