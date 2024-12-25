int sum(int n)
{
	if(n==1)
		return 1;
	else
		return n+sum(n-1);
}
#include <stdio.h>
int main()
{
	int s,n;
	scanf("%d",&n);
	s=sum(n);//调用sum递归函数累加1-n的和
    printf("%d\n",s);
    return 0;
}

