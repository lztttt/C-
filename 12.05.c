#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d\n",fun(&x,&y));//调用fun函数得到两数最大值
        return 0;
}

