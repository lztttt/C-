#include <stdio.h>
int main()
{
	int n,m,i=0;
	scanf("%d%d",&m,&n);
	for(m;m<n;m++)
	{            
		if(m%3!=0)
		{
			i=i+1; 
			printf("%d,",m);
		}      
		if(i==3)
		{
			 printf("\n");
			 i=0; 
			} 
	} 
	if(i!=0){printf("\n");}
	return 0;
}
