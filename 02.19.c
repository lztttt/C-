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
		if (b==0){ printf("���ܱ�0��\n");
		}
		else{
    	printf("%d\n",a/b);
    	}
	}
    else  
    {  
        printf("������д�\n");   
    }  
    return 0;  
}  
