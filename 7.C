#include<stdio.h>
#include<conio.h>

void main() 
{
    float percent;
    printf("Enter the percentage of marks: ");
    scanf("%f", &percent);
    
    // Validate the input and determine the grade 
    if (percent < 0 || percent > 100)
        printf("Please enter a percentage between 0 and 100.\n");
    else if (percent >= 75)  
        printf("DISTINCTION\n");
    else if (percent >= 60)
        printf("FIRST CLASS\n");
    else if (percent >= 50)  
        printf("SECOND CLASS\n");
    else if (percent >= 40)  
        printf("PASS CLASS\n");
    else  
        printf("Fail\n");
    
    getch();
}
