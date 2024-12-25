#include <stdio.h>
 
int main ()
{
   	int a,b;
   	scanf("%d%d",&a,&b);
   if( a > b )
   {
       printf("A最大\n");
   }
   if( a < b )
   {
       printf("B最大\n" );
   }
   if( a==b )
   {
   		printf("一样大\n");
	} 
	return 0;
}
