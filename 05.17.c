#include <stdio.h>  
int main()  
{  
    int i, j, n, flag = 0, counter = 0;  
    scanf("%d", &n);  
    for (i = 1; i <= 100; i++)  
    {  
        flag=0;  
        for (j = 2; j < i; j++)  
        {  
            if (i % j == 0)  
            {  
                flag = 1;  
                break;  
            }  
        }  
        if (flag!=1)  
        {  
            counter=counter+1;  
        }  
          
        if (counter == n+1)  
        {  
            printf("%d\n", i);  
            break;  
        }  
        // printf("%d\t%d\t%d\n",i,flag,counter);  
    }  
    return 0;  
}  