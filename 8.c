#include<stdio.h>
#include<conio.h>

void main()
{
    int i, first, last, mid, n, search, a[20];

    printf("Enter the size\n");
    scanf("%d", &n);

    printf("Enter the numbers in ascending order\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    mid = (first + last) / 2;
}
while (first <= last)
{
    if (a[mid] < search)
        first = mid + 1;
    else if (a[mid] == search)
    {
        printf("%d found at position %d\n", search, mid + 1);
        break;
    }
    else
        last = mid - 1;

    mid = (first + last) / 2;
}

if (first > last)
    printf("Not found");

getch();
