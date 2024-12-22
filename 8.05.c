#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[500];
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
        {
            if (a[i]=='x'||a[i]=='y'||a[i]=='z')
            {
                a[i] = a[i] - 26;
            }
            a[i] = a[i] + 3;
        }
    }
    printf("%s\n", a);
}
