#include <stdio.h>  
int main()  
{  
    int n,in;  
    for(n=0;n<10;n++)  
    {  
    	scanf("%d",&in);  
		if(in<0)
		{ 
			printf("%d,",in);
		}
   	}
   	printf("\n");
    return 0;  
}  
