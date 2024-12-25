#include <stdio.h>   
int main()  
{  
    int year,m;  
    scanf("%d%d",&year,&m);    
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		printf("31天\n");
	}
	else if(m==4||m==6||m==9||m==11)
	{
		printf("30天\n");
	 } 
	 else
	 {
		if((year%4)==0&&(year/100)>10) 
		{
			printf("29天\n"); 
		}
		else{printf("28天\n");} 
	 }
	 return 0;  
}   