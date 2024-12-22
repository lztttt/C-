#include <stdio.h>
int main ()
{
   	int a,max=0,n;
   	for(n=1;n<=10;n++)
	{
   		scanf("%d",&a);
		if(a>=max)
		{ 
		max=a;
		}
	} 
   	printf("max=%d\n",max); 
	return 0;
}
