#include <stdio.h>
int main()
{
	int n,m,sum=0;
	scanf("%d%d",&m,&n);
	for(m;m<n;m++)
	{
	if(m%3!=0)
	{
	printf("%d,",m);
	}
	} 
	printf("\n");
	return 0;
}
