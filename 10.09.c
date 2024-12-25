#include <stdio.h>
void revers(int x);
int main()      
{
    int x;   
    scanf("%d",&x);     
    revers(x);//输出x的翻转数
    return 0;   
}
// 
void revers(int x)
{
    int r=0;
	while(x>0)
    {
     r=r*10+x%10;
     x=x/10;
    }
    printf("%d\n",r);
}
