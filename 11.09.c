int euclideanAlgorithm(int a,int b)
{
	if(b==0)
		return a;
	else
		return euclideanAlgorithm(b,a%b);
}   
// 
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);//键盘输入两个整数
	printf("%d\n",euclideanAlgorithm(a,b));//调用递归函数求最大公约数   
	return 0;
}

