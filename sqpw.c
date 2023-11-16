// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

int main() {
    // Write C code here
    
    double numb, square, power;
    
    printf("Enter a number: ");
    scanf("%lf", &numb);
    
    square = sqrt(numb);
    
    power = pow(numb, square);
    
    printf("\nSquare %.2lf", square);
    printf("\nPower %.2lf", power);
    
    
    
    return 0;
}
