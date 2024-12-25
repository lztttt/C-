int fac(int n)
{
    int i, result = 1;
for ( i = 0; i < n; i++)
{
    result *= (i+1);
}
    return result;
}
#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);//输入实参n
  printf("%d\n",fac(n));//调用普通函数计算阶乘
  return 0;
}

