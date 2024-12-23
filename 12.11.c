void fun(float *p1,float *p2)
{
	float t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float *p1=&a;
    float *p2=&b;
    fun(p1,p2); 
    if (a>b)
    {
    printf("%.2f,%.2f\n",*p1,*p2);   
    }
    else{
    printf("%.2f,%.2f\n",*p2,*p1);}
    return 0;
}
