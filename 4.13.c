#include <stdio.h>
int main()
{
    int year, m, day, total=0;
    scanf("%d%d%d", &year, &m, &day);
    {
    m=m-1;
        for (m;m>0;m--)
        {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            {
                total = total + 31;
            }
            else if (m == 4 || m == 6 || m == 9 || m == 11)
            {
                total = total + 30;
            }
            else if (m == 2)
            {
                if ((year % 4) == 0 && year/100>10)
                {
                    total = total + 29;
                }
                else
                {
                    total = total + 28;
                }
            }
            // printf("%d\t%d\n" ,m, total);
        }

        total = total + day;
        printf("第%d天\n", total);
        return 0;
    }

}

