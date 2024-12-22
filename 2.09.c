#include <stdio.h>
 
int main ()
{
   	float m,n;
   	scanf("%f%f",&m,&n);
   if( m > n )
   {
    printf("%.2f,%.2f\n",m,n );
   }
   else
   {
     printf("%.2f,%.2f\n",n,m );
   }
	return 0;
}
