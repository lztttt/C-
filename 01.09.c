#include <stdio.h>
int main()
{
	double pi,r,s1,h,s2;
	pi=3.1415926;
	scanf("%lf,%lf",&r,&h);
	s1=r*r*pi;
	s2=(s1*2)+pi*r*2*h;
	printf("面积=%.3lf\n",s2);
    return 0;
}
