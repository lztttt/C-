#include <stdio.h>
int main (){
	float daily,exam,total; 
	scanf("%f",&daily);
	total=daily*0.3;
	exam=(60-total)/0.7;
	printf("%.1f\n",exam);
}
