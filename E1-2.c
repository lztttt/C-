#include <stdio.h>
int main()
{
    double input,bike,walk;
    scanf("%lf", &input);
    bike = (input/3.0)+50;
    walk = input/1.2;
    if (bike <walk)
    {
        printf("Bike\n");
    }
    else
    {
        printf("Walk\n");
    }
    return 0;
}