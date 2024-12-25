#include <stdio.h>
void revers(int x);//函数声明 
int main()      
{
    int x;   
    scanf("%d",&x);     
    revers(x);//调用递归函数输出x的翻转数
    printf("\n");//因为递归函数输出没有以换行结束，所以调用递归函数后要补充一个换行
    return 0;   
}
void revers(int x)
{   
    if(x==0)
        return;
    printf("%d",x%10);
    revers(x/10);
   
}
