#include <stdio.h>
int main()
{
	double pi,r,s,l;
	pi=3.1415926;
	scanf("%lf",&r);
	s=r*r*pi;
	l=2*pi*r;
	printf("面积=%.2lf,周长=%.2lf\n",s,l);
    return 0;
}
