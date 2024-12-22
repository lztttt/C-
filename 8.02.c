#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    char c[10];
    scanf("%s", c);
    n=strlen(c);
    for ( i = n-1; i>=0 ; i--)
    {
        printf("%c",c[i]);
    }
    printf("\n");  
}