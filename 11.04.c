int fac(int n)
{
  if(n==0)
    return 1;
  else
    return n*fac(n-1);
}
#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);//输入实参n
  printf("%d\n",fac(n));//调用递归函数计算阶乘
  return 0;
}

