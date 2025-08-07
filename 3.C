#include <stdio.h>
#include<conio.h>
#include <math.h>

void main() 
{
    int n, i, c = 0;
    clrscr();
    printf("Enter any number: ");
    scanf("%d", &n);
    
    if (n <= 1) 
    {
        printf("%d is not a Prime number.\n", n);
        getch();
        exit(0);
    } 
    else 
    {
        for (i = 2; i <= n/2; i++) 
        {
            if (n % i == 0) 
            {
                c++;
                break;
            }
        }
    }
    if (c == 0)
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is not a Prime number.\n", n);

    getch();
}
