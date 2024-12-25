#include<stdio.h>
int y,s,q;/*全局变量定义，y,s,q分别为字母、数字、其他字符个数*/
void fun(char c[]);//函数声明
int main()
{            
   char c[500];   
   gets(c);//用来接受从键盘输入的一个字符串（可带空格）
   fun(c);//函数调用实现字符个数统计，即实现对全局变量赋值   
   printf("字母数=%d,数字数=%d,其他字符数=%d\n",y,s,q); //个数输出，即输出全局变量
 return 0;
}

// 
void fun(char c[])
{
         int i;
         for(i=0;c[i]!='\0';i++)
         {
             if(c[i]>='a'&&c[i]<='z'||c[i]>='A'&&c[i]<='Z')//字母
                 y++;
             else if(c[i]>='0'&&c[i]<='9')//数字
                 s++;
             else//其他字符
                 q++;
         }
}