#include <stdio.h>  
int main()  
{  
    double f=-1,i,n,sum=0;  
    scanf("%lf",&n);  
    for(i=1;i<=3*n-2;i=i+3)  
    {  
    f=-f;
    sum=sum+(1.0/i)*f;  
     }   
    printf("%.5lf\n",sum);  
    return 0;  
}  
