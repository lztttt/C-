#include <stdio.h>
int main()
{
	int n,m,sum=0;
	scanf("%d%d",&m,&n);
	for(m;m<n;m++)
	{
	if(m%3!=0)
	{
		sum=sum+m;
	}
	} 
	printf("%d\n",sum);
	return 0;
}