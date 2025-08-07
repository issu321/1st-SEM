#include <stdio.h>
#include<conio.h>

void main() 
{
    int A, B, C;
    clrscr();
    printf("Enter three numbers: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C)
        printf("The largest number is %d\n", A);
    else if (B >= A && B >= C)
        printf("The largest number is %d\n", B);
    else
        printf("The largest number is %d\n", C);

    getch();
}
