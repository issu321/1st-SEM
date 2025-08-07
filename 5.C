#include<stdio.h>
#include<conio.h>

void main() 
{
    int a, b, rem;
    printf("enter any two numbers:");
    scanf("%d%d", &a, &b);
    
    while (b != 0)  
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    
    printf("GCD of two numbers is:%d", a);
    getch();
}
