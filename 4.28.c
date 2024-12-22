#include <stdio.h>
int main()
{
    int r, w, b,count,n;
    scanf("%d",&n);
    for (r = 0; r <= 3; r++)
    {
        for (w = 0; w <= 3; w++)
        {
            for (b = 0; b <= 6; b++)
            {
                if (r+b+w==n)
                {
                    count=count+1;
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}