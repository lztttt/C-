#include<stdio.h>
int main()
{            
   int y=0,s=0,q=0,i=0;//y,s,q分别为字母、数字、其他字符个数，i为循环计数     
   char c[100];   
   gets(c);//用来接受从键盘输入的一个字符串（可带空格）
// 前置代码
    int counter_letter=0,counter_number=0,counter_other=0;
    for(i=0;c[i]!='\0';i++)
    {
        if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z'))
        {
            counter_letter++;
        }
        else if(c[i]>='0'&&c[i]<='9')
        {
            counter_number++;
        }
        else
        {
            counter_other++;
        }
    }
    printf("字母数=%d,数字数=%d,其他字符数=%d\n",counter_letter,counter_number,counter_other);
    return 0;
}
