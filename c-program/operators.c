#include <stdio.h>
#include <conio.h>

void main()
{
    system("cls");
    // int y = 10;
    // int x = 11;

    // y = x++;
    // x = y++;
    // y = ++x;
    // x = ++y;
    // printf("y %d \n", y);
    // printf("x %d \n", x);

    int y = 10;
    float x = -6;
    int a=18, b=9, c, d, e=10, f=1, g=6, h=10, i=6;

    printf("a + b = %d \n", y+x); // output = 0
    printf("a - b = %d \n", y-x); // output = 0
    printf("a * b = %d \n", y*x); // output = 0
    printf("a / b = %d \n", y/x); // output = 0
    // printf("a \% b = %d \n", y%x); // output = 0

    printf("a + b = %f \n", y+x); // output = 15.000000
    printf("a - b = %f \n", y-x); // output = 5.000000
    printf("a * b = %f \n", y*x); // output = 50.000000
    printf("a / b = %f \n", y/x); // output = 2.000000
    // printf("a \% b = %d \n", y%x); // output = 2.000000

    c = b++;
    d=b;


    printf("%d \n", a <b < c > d);
    printf("%d \n", a + c == b > e < c + d);
    printf("%d \n", a + c == b >= e < c + d != 1);
    printf("%d \n", f-- && ++g);
    printf("%d \n", --f && ++g);

    // Bitwise
    printf("%d \n", h & i);
    printf("%d \n", h | i);
    printf("%d \n", h & i && h + 1 || 0);
    printf("%d \n", e << 2);

    getch();
}