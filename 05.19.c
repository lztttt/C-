#include <stdio.h>
int main()
{
    double r_in,r_out;
    scanf("%lf,%lf", &r_in, &r_out);
    printf("%.2lf\n", (3.14*r_out*r_out)-(3.14*r_in*r_in));
    return 0;
}