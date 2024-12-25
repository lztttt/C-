#include<stdio.h> 
int main() 
{
 int n;  
 scanf("%d",&n); //输入n
 printf("%d\n",fib(n));//调用递归函数获取第n项
 return 0;
}
// 
int fib(int n) 
{
 if(n==0) return 0;
 if(n==1) return 1;
 return fib(n-1)+fib(n-2);
} 
