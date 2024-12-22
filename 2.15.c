#include <stdio.h>   
int main(){  
    char a;  
    scanf("%c",&a);  
        if( a<=90&a>=65)  
    {   printf("大写字母\n");  
    }  
    else if( a<=122&a>=97)  
    {  
        printf("小写字母\n");   
    }  
     else if( a<=57&a>=48)  
    {  
        printf("数字字符\n");   
    }  
    else{
   		printf("其他字符\n"); 
	} 
    return 0;  
}  
