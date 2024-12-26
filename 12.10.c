int *fun(int *p1,int *p2)   
{   
 int *max;
 max=p1;
 if(*max<*p2) max=p2;
 return max;
}
#include<stdio.h>
int main()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
  int *p1,*p2,*p3;
  p1=&a;
  p2=&b;
  p3=&c;
  int *max=fun(p1,p2);
  if(*max<*p3) max=p3;
  printf("max=%d\n",*max);
  return 0;
}       