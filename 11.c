#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20] = "Hello";
    char str2[20] = "Welcome";
    char str3[20];
    int x;

    strcpy(str3, str1);
    printf("Length of str1: %d\n", strlen(str1));
    
    // 1. strlen-strlen of a string
    // 2. strcpy-Copy one string to another
    
    strcpy(str3, str2);
    printf("Length of str2: %d\n", strlen(str2));

//3. strcat()- Concatenate two strings
strcpy(str3, str2);
printf("After strcat: %s\n", str3);

//4. strcmp() and strcmpi()
printf("COMPARE STRINGS\n");
//compare str1 and str2 and print the result
printf("%s\n",str1);
printf("%s\n",str2);
if(strcmp(str1,str2)==0)
    printf("strings are equal");
else
    printf("strings are not equal");

getch();
