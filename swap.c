#include <stdio.h>
// Program 13. To Swap Two Numbers using Pointers
#include <conio.h>

void main()
{
    int x, y, temp;
    int *a, *b;
    a = &x;
    b = &y;
    printf("enter any two numbers: ");
    scanf("%d %d", &x, &y);
    printf("before swap: x = %d, y = %d\n", x, y);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("after swap: x = %d, y = %d\n", x, y);
}
