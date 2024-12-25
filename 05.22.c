#include <stdio.h>
int main()
{
     double x;
     scanf("%lf", &x);
     if (x < -10)
     {
          printf("%.2lf\n", 5 * x * x);
     }
     else if (x > 20)
     {
          printf("%.2lf\n", 3 * x + 8);
     }
     else if (x >= -10 && x <= 20)
     {
          printf("%.2lf\n", x * x + 1);
     }
}