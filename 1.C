#include <stdio.h>
#include <conio.h>
#define Pi 3.147

void main()
{
    float r, area = 0, cir = 0;
    printf("enter the radius\n");
    scanf("%f", &r);
    area = Pi * r * r;
    cir = 2 * Pi * r;
    printf("the area of circle is %f\n", area);
    printf("the circumference of the circle is %f\n", cir);
}
