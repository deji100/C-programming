#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int x;

    printf("Enter a character: \n");

    scanf("%d \n", &x);

    switch (x)
    {
    case 1:
        printf("Result is %d", x);
        break;
    case 2:
        printf("Result is %d", x);
    default:
        break;
    }

    return 1;
}