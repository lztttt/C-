#include <stdio.h>  
int main()  
{  
    int n;  
    float sum=0,in;  
    for(n=0;n<10;n++)  
    {  
    scanf("%f",&in);  
    sum=sum+in ;  
     }   
    printf("%.1f\n",sum/10);  
    return 0;  
}  
