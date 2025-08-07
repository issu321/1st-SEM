#include <stdio.h>
#include <conio.h>

void main()
{
    char string[50];
    int i, length = 0;

    printf("Enter the string: \n");
    gets(string);

    // keep going through each character of the string till its end
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length of %s is %d", string, length);
}
