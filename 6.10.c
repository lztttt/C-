#include <stdio.h>
int main()
{
    int i, a[8];
    for (i = 0; i < 8; i++)
        scanf("%d", &a[i]);
    //
    int flag = 0,counter=0;
    for (i = 0; i < 8; i++)
    {
        if (a[i] == 13)
        {
            flag = 1;
            counter=counter+1;
        }
    }
    if (flag == 0)
    {
        printf("没找到\n");
    }
    else{
        printf("%d次\n",counter);
    }
    return 0;
}