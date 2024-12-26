#include <stdio.h>  
float variance(int a[],int n);//计算方差的函数声明
float ave(int a[],int n);//计算均值的函数声明
int main()  
{  
 int a[10],i=0;  
 for(i=0;i<10;i++) //输入数组a
   scanf("%d",&a[i]);  
 printf("%.2f\n",variance(a,10));//调用variance函数计算方差  
 return 0;
}
float ave(int a[], int n)   
{   
    int sum = 0;   
    for(int i = 0; i < n; i++)  
        sum += a[i];  
    return (float)sum / n;  // 返回均值  
}  
float variance(int a[], int n)   
{   
    float mean = ave(a, n); // 计算均值
    float var = 0.0;  
    for(int i = 0; i < n; i++)  
        var += (a[i] - mean) * (a[i] - mean);  // 计算各个数与均值差的平方
    return var / n;   // 返回方差  
}  