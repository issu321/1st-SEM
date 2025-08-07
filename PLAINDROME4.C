#include<stdio.h>
#include<conio.h>

void main()  
{
    int num, org, rev = 0, rem;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    org = num;    // Store the original number
    
    while (num != 0)     // Reverse the number
    {
        rem = num % 10;          // Get the last digit
        rev = rev * 10 + rem;    // Build the reversed number
        num = num / 10;          // Remove the last digit
    }
    
    if (org == rev)
        printf("%d is a palindrome", org);
    else  
        printf("%d is not a palindrome", org);

    getch();
}
