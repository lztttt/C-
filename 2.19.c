#include <stdio.h>   
int main()  
{  
    int a,b;  
    char c;
    scanf("%d%c%d",&a,&c,&b);  
    if(c=='+')
	{ 
	printf("%d\n",a+b);
	}                     
    else if(c=='-')
	{
    printf("%d\n",a-b);
	}
	else if(c=='*'){
    printf("%d\n",a*b);
	}
	else if(c=='/'){
		if (b==0){ printf("不能被0除\n");
		}
		else{
    	printf("%d\n",a/b);
    	}
	}
    else  
    {  
        printf("运算符有错\n");   
    }  
    return 0;  
}  
