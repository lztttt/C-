#include <stdio.h>  
int main()  
{  
    int n,t=0;  
    float sum=0,in;  
    for(n=0;n<10;n++)  
    {  
    	scanf("%f",&in);   
		if(in>=60){t=t+1;} 
     }   
    printf("及格人数=%d\n",t);  
    return 0;  
}  
