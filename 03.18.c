#include <stdio.h>
int main(){
	int a=0,b=0,c=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==b||a==c||b==c){
		printf("����������\n");}
		else{printf("һ��������\n");}
	}
	else{
		printf("��������\n");
			}
	return 0;
}                                     
