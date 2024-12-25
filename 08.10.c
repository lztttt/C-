#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], max = 0, max_letter;
    int i, counter = 0, j;
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {

            for (j = 0; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                {
                    counter++;
                }
            }
            if (counter > max)
            {
                max = counter;
                max_letter = str[i];
            }
            counter = 0;
        }
    }
    printf("%c\n", max_letter);
    return 0;
}