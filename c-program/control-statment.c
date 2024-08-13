#include <stdio.h>
#include <conio.h>

void main()
{
    system("cls");

    int a;

    printf("Enter a: ");
    scanf("%d", &a);

    if(!a)
        printf("\nInside block");
    else
        printf("\nOutside block");
    getch();
}