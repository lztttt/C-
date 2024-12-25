#include <stdio.h>
int main()
{
    float input;
    scanf("%f", &input);
    if (input < 18)
    {
        printf("偏轻\n");
    }
    else if (input >= 18 && input < 22.9)
    {
        printf("标准\n");
    }
    else if (input >= 23 && input < 25)
    {
        printf("过重\n");
    }
    else if (input >= 25)
    {
        printf("肥胖\n");
    }
    return 0;
}