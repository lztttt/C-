int fun(int a,int b)   
{   
 if(a>b)   
  return a;   
 else   
  return b;     
}   
#include  <stdio.h>   
int main()   
{   
 int a,b,c,max;
 scanf("%d%d%d",&a,&b,&c);
 max=fun(a,b);//得到ab两数最大值max
 max=fun(max,c);//得到max和c的最大值，即abc的最大值
 printf("max=%d\n",max);
 return 0;
}


