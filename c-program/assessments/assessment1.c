#include <stdio.h>
#include <conio.h>

void main()
{
    system("cls");

    int a, b, c;

    printf("Enter 3 numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    printf("G %d \n", "B");

    if (a>b && a>c)
        printf("%d is the max number.", a);
    else if (b>a && b>c)
        printf("%d is the max number.", b);
    else
        printf("%d is the max number.", c);
}