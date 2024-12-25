int gcd(int a,int b)
{
    int i, max = 0, temp;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (i = 1; i <= a; i++)
    {
        if ((b % i == 0) && (a % i == 0) && i > max)
        {
            max = i;
        }
    }
    return max;
}
#include <stdio.h>
int main()        
{  
int a,b;
scanf("%d%d",&a,&b);
printf("%d\n",gcd(a,b));//调用普通函数求最大公约数      
return 0;      
}

