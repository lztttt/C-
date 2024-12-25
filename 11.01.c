int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
        s+=i;
    return s;
}   
#include <stdio.h>
int main()
{
	int s,n;
	scanf("%d",&n);
	s=sum(n);//调用sum普通函数累加1-n的和
    printf("%d\n",s);
    return 0;
}

