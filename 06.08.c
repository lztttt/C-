#include<stdio.h>   
int main()   
{  
    int n,a[30]={1,1},i;  
    scanf("%d",&n);  
    // 
    for (i = 2; i < 30; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }
    printf("%d\n", a[n-1]);
}