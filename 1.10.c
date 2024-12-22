#include <stdio.h>
int main (){
	double cm,inch,in;
	scanf("%lf",&cm);
	in=(1/2.54)*cm;
	inch=in/12;
	printf("%.2lf厘米=%.2lf英寸=%.2lf英尺\n",cm,in,inch);
	return 0; 
}
