#include<stdio.h>
double area(float r)  
{
	return 3.1415926*r*r;
}
double cir(float r)  
{
	return 2*3.1415926*r;
}
int main()  
{
	float r;
	scanf("%f",&r);
	printf("面积=%.2f,周长=%.2f\n",area(r),cir(r));
	return 0;
}

