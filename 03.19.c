#include <stdio.h>
int main(){
	int input=0,a=0,b=0,c=0;
	scanf("%d",&input);
	a=input/100;
	b=input/10%10;
	c=input%10;
//	printf("%d,%d,%d",a,b,c);
	if(a*a*a+b*b*b+c*c*c==a*100+b*10+c){
		printf("ÊÇ\n");
	}
	else{
		printf("²»ÊÇ\n");
			}
	return 0;
}                                     
