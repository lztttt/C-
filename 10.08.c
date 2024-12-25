#include <stdio.h>
int revers(int x)
{
	int r=0;
	while(x>0)
    {
     r=r*10+x%10;
     x=x/10;
    }
    return r;
}
// 
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",revers(x));
    return 0;
}
