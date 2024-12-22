#include <stdio.h>  
int main()  
{  
    int i, n, counter = 0;  
    scanf("%d", &n);  
    for (i = 1; i <= 100; i++)  
    {  
        if (i % 2 != 0)  
        {  
            counter = counter + 1;  
        }  
        if (counter == n)  
        {  
            printf("%d\n", i);  
            break;  
        }  
    }  
    return 0;  
}  