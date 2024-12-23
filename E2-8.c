#include<stdio.h>
#include<string.h>

void *separationString(char *str)
{
    char *p;
    p=strchr(str,' ');
    if(p!=NULL)
    {
        *p='\0';
        p++;
    }
    return p;
}
int main()
{

   char str[200];
   char *p;
   gets(str);
   p=separationString(str);
   puts(str);
   puts(p);
   return 0;
}

