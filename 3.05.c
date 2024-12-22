#include <stdio.h>  
int main()  
{  
    int i,n,sum=0;  
    scanf("%d",&n);  
    for(i=1;i<=3*n-2;i=i+3)  
    {  
    sum=sum+i;  
     }   
    printf("%d\n",sum);  
    return 0;  
}  
