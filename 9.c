//program 9 — wap to sort elements using Bubble sort 
#include <stdio.h>
#include <conio.h>

void main()
{
    int a[20], n, i, j, temp;
    clrscr();
    printf("Enter the size");
    scanf("%d", &n);
    printf("ENTER NUMBERS IN UNSORTED ORDER \\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    //sorting procedure
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
printf("sorted list is:\n");
for(i=0;i<n;i++)
printf("%d \t");
}
