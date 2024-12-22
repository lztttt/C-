#include <stdio.h>
int main(){
	int a=0,b=0,c=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==b||a==c||b==c){
		printf("等腰三角形\n");}
		else{printf("一般三角形\n");}
	}
	else{
		printf("非三角形\n");
			}
	return 0;
}                                     
