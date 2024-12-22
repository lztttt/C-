#include <stdio.h>

int main()
{
   int a;
   scanf("%d", &a);
   if (a < 0)
   {
      printf("¹ÌÌ¬\n");
   }
   else if (a > 100)
   {
      printf("ÆøÌ¬\n");
   }
   else
   {
      printf("ÒºÌ¬\n");
   }
   return 0;
}
