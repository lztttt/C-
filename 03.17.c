#include <stdio.h>
#include <math.h>
int main()
{
//	double a=0.0,b=0.0,c=0.0,d=0.0,x1=0.0,x2=0.0;
	double a,b,c,x1,x2,delta;
	int d;

	scanf("%lf,%lf,%lf",&a,&b,&c);
	d=(b*b)-(4*a*c);
	delta=(b*b)-(4*a*c);
//	printf("%lf",d);
	if(d==0){
		x1=(-b-sqrt(fabs(delta)))/(2*a);
		printf("%.4lf\n",x1);
		printf("%.4lf\n",x1);
				}
	if(d>0){
		x1=(-b+sqrt(fabs(delta)))/(2*a);
		x2=(-b-sqrt(fabs(delta)))/(2*a);
		printf("%.4lf\n%.4lf\n",x1,x2);
		
				}
	if(d<0){
		printf("ÎÞÊµ¸ù\n");
				}
	return 0;
}                                     
