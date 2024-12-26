#include <stdio.h>  
float ave(int *p,int n);//计算均值的函数声明
float variance(int *p,int n);//计算方差的函数声明
int main()  
{  
 int a[10],i,*p=a;  
 for(i=0;i<10;i++) //输入数组a
   scanf("%d",p+i);  
 printf("%.2f\n",variance(p,10));//调用variance函数计算方差  
 return 0;
}
float ave(int *p, int n)   
{   
    int sum = 0;   
    for(int i = 0; i < n; i++)  
        sum += *(p + i);
    return (float)sum / n; 
}  
float variance(int *p, int n)   
{   
    float mean = ave(p, n); 
    float var = 0.0;  
    for(int i = 0; i < n; i++)  
        var += (*(p + i) - mean) * (*(p + i) - mean);
    return var / n; 
}  

