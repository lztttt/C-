void caesar(char *s, int k) {
    int i;
    k = k % 26;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] + k;
            if (s[i] > 'z') {
                s[i] = s[i] - 26;
            }
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + k;
            if (s[i] > 'Z') {
                s[i] = s[i] - 26;
            }
        }
    }
}                    
// 
#include<stdio.h>
int main()
{            
   char c[500];   
   gets(c);//用来接受从键盘输入的一个字符串（可带空格）
   caesar(c,3);//对字符串进行凯撒加密 
   printf("%s\n",c);//整体输出加密后的字符串
   return 0;
}

