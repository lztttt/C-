#include <stdio.h>
int main()
{
	float a=0.0,b=0.0,c=0.0;
	int d=0;
	scanf("%f,%f,%f",&a,&b,&c);
d=b*b-(4*a*c);
//	printf("%d",d);
	if(d==0){
		printf("��ȸ�\n");
				}
	if(d>0){
		printf("���ȸ�\n");
				}
	if(d<0){
		printf("��ʵ��\n");
				}
	return 0;
}                                     
