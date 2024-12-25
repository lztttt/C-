#include <stdio.h>  
int main()  
{  
    int f=-1,i,n,sum=0;  
    scanf("%d",&n);  
    for(i=1;i<=3*n-2;i=i+3)  
    {  
    f=-f;
    sum=sum+i*f;  
     }   
    printf("%d\n",sum);  
    return 0;  
}  
