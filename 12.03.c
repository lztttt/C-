#include <stdio.h>
int main()
{
    float a, b, *pa = &a, *pb = &b;
    scanf("%f%f", pa, pb);  
    // 
    if (*pa > *pb)
    {
        printf("%.2f,%.2f\n", *pa, *pb);
    }
    else 
    {
        printf("%.2f,%.2f\n", *pb, *pa);
    }
    return 0;
}
