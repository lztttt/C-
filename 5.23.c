#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 1:
    case 2:
    case 3:
        printf("Susanna\n");
        break;
    case 4:
    case 5:
        printf("Yolanda\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("Rose\n");
        break;
    case 9:
    case 10:
        printf("Clover\n");
        break;
    }
}