#include<stdio.h>
void fun(char c[]);//函数声明
int main()
{            
   char c[500];   
   gets(c);/*用来接受从键盘输入的一个字符串（可带空格）*/
   fun(c);//函数调用实现字符个数统计并输出   
   return 0;
}

// 
void fun(char c[ ]){
    int i,num=0,lett=0,others=0;
    for(i=0;c[i]!='\0';i++){
        if(c[i]>='a'&&c[i]<='z')
            lett++;
        else if(c[i]>='A'&&c[i]<='Z')
            lett++;
        else if(c[i]>='0'&&c[i]<='9')
            num++;
        else
            others++;
    }
    printf("字母数=%d,数字数=%d,其他字符数=%d\n",lett,num,others);
}
