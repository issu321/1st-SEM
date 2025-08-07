#include<stdio.h>
#include<conio.h>

void main()   
{
    int num, i, sum = 0;    
    printf("Enter a positive number: ");   
    scanf("%d", &num);
    
    for (i = 0; i <= num; i++)   
    {
        sum = sum + i;    
    }
    
    // display the sum of natural numbers   
    printf("\nSum is %d", sum);    
    getch();
}
