#include <stdio.h>
int main()
{
	int n,sum=0,in;
 	for(n=0;n<10;n++)
	{
		scanf("%d",&in);
	
	if(in%2==0){
					sum=sum+in ;
				}
	 } 
	printf("%d\n",sum);
	return 0;
} 