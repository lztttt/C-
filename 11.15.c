float ave(int a[],int n)
{
	int i;
	float s=0;
	for(i=0;i<n;i++)
		s=s+a[i];
	return s/n;
}
// 
#include<stdio.h>
int main()
{
    int i ,a[10];
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("均值=%.1f\n",ave(a,10));
    return 0;
}
